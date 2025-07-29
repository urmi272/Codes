#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int slargestNo(vector <int> &arr, int n){
    int largest = arr[0];
    int slargest = -1; // Initialize to a value that cannot be in the array
    for (int i = 0; i<n ; i++){
        if (arr[i]> largest){
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i]> slargest && arr[i] != largest){ 
            slargest = arr[i];
        }
    }
    return slargest;
};

int ssmallest(vector <int> &arr, int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i<n ; i++){
        if (arr[i]< smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i]< ssmallest && arr[i] != smallest){ 
            ssmallest = arr[i];
        }
    }
    return ssmallest;
};

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int result = slargestNo(arr, size);
    int result2 = ssmallest(arr, size);
    cout << "The second largest number is: " << result << endl;
    cout << "The second smalest number is: " << result2 << endl;
    return 0;
}