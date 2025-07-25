#include <iostream>
#include <queue>
using namespace std;

struct Process {
    int id, burst_time, remaining_time, wait_time, turn_around_time;
};

int main() {
    int n, quantum;
    cout << "Enter number of processes and time quantum: ";
    cin >> n >> quantum;

    Process p[n];
    queue<int> q;

    for (int i = 0; i < n; i++) {
        p[i].id = i + 1;
        cout << "Enter burst time for process " << p[i].id << ": ";
        cin >> p[i].burst_time;
        p[i].remaining_time = p[i].burst_time;
        p[i].wait_time = 0;
        q.push(i);
    }

    int time = 0;
    while (!q.empty()) {
        int i = q.front();
        q.pop();

        if (p[i].remaining_time > quantum) {
            p[i].remaining_time -= quantum;
            time += quantum;
            q.push(i);
        } else {
            time += p[i].remaining_time;
            p[i].turn_around_time = time;
            p[i].remaining_time = 0;
        }
    }

    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < n; i++) {
        p[i].wait_time = p[i].turn_around_time - p[i].burst_time;
        cout << p[i].id << "\t" << p[i].burst_time << "\t\t" << p[i].wait_time << "\t\t" << p[i].turn_around_time << endl;
    }
    return 0;
}
