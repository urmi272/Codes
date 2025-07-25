#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int bt[n], wt[n] = {0}, tat[n];
    cout << "Enter burst times:\n";
    for (int i = 0; i < n; i++) cin >> bt[i];

    for (int i = 1; i < n; i++) wt[i] = wt[i-1] + bt[i-1];  // Calculate waiting time
    for (int i = 0; i < n; i++) tat[i] = bt[i] + wt[i];     // Turnaround time

    cout << "Process\tBT\tWT\tTAT\n";
    for (int i = 0; i < n; i++)
        cout << i+1 << "\t" << bt[i] << "\t" << wt[i] << "\t" << tat[i] << endl;

    return 0;
}
