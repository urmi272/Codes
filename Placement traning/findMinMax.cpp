#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxA = arr[0], minA = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxA)
            maxA = arr[i];

        if (arr[i] < minA)
            minA = arr[i];
    }

    cout << "max: " << maxA << "\n";
    cout << "min: " << minA;

    return 0;
}