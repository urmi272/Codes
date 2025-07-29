#include <iostream>
#include <vector>
using namespace std;

void rrotate(vector <int> &arr, int d){
    int n = arr.size();
    d = d % n;
    vector<int> temp(n); 
    for (int i = 0; i<n ; i++){
        temp[(i + d) % n] = arr[i]; // Place each element in its new position temporarily 
                                    // i + d gives the new index after rotation
                                    // % n ensures it wraps around if it exceeds the size of the array
    }
    arr = temp;;
};

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