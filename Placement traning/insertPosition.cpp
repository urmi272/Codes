#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1, 3, 5, 6};
    int target;
    cin>> target;

    int left = 0, right = nums.size() - 1;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(nums[mid] == target){
            cout<< mid;
            return 0;
        } else if(nums[mid] < target){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout<< left;
    return 0;
}