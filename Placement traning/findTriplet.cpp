#include <iostream>
#include <vector>
using namespace std;

bool isTriplet(const vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            for (int k = j + 1; k < nums.size(); ++k) {
                if (nums[i] + nums[j] + nums[k] == target) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int target = 6;
    vector<int> nums = {2, 7, 4, 0, 9, 5, 1, 3};

    cout << boolalpha << isTriplet(nums, target) << endl;
    return 0;
}