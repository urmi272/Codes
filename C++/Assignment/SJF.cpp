#include <iostream>
#include <algorithm>
using namespace std;

struct Process {
    int id, burst_time, wait_time, turn_around_time;
};

bool compare(Process a, Process b) {
    return a.burst_time < b.burst_time;
}

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;
    
    Process p[n];
    
    for (int i = 0; i < n; i++) {
        p[i].id = i + 1;
        cout << "Enter burst time for process " << p[i].id << ": ";
        cin >> p[i].burst_time;
    }
    
    sort(p, p + n, compare);
    
    p[0].wait_time = 0;
    for (int i = 1; i < n; i++)
        p[i].wait_time = p[i - 1].wait_time + p[i - 1].burst_time;
    
    for (int i = 0; i < n; i++)
        p[i].turn_around_time = p[i].wait_time + p[i].burst_time;
    
    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < n; i++)
        cout << p[i].id << "\t" << p[i].burst_time << "\t\t" << p[i].wait_time << "\t\t" << p[i].turn_around_time << endl;

    return 0;
}
