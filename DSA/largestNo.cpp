#include <iostream>
#include <vector>
using namespace std;

int largestNo(vector<int> &arr, int n){
    int largest = arr[0]; //assuming the first element is the largest
    for(int i = 0; i<n; i++){
        if (arr[i]> largest){
            largest = arr[i]; //update largest if current element is greater
        }
    }
    return largest; 
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int result = largestNo(arr, size);
    cout << "The largest number is: " << result << endl;
}