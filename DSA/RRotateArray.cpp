#include <iostream>
#include <vector>
using namespace std;

// void rrotate(vector <int> &arr, int d){
//     int n = arr.size();
//     d = d % n;
//     vector<int> temp(n); 
//     for (int i = 0; i<n ; i++){
//         temp[(i + d) % n] = arr[i];
//     }
//     arr = temp;;
// };

//fuc to reverse the array
// void reverse(int arr[], int start, int end) {
//     while (start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
#include <algorithm> // For std::reverse
void rrotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end()); //
        reverse(nums.begin(), nums.end());
}

int main (){
    int size, d;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number of rotations: ";
    cin >> d;
    
    rrotate(arr, d);
    
    cout << "Array after rotation: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}