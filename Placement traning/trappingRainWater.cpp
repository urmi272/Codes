#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> heights = { 3, 0, 2, 0, 4, 0, 2};
    int sum = 0;
    for(int i = 1; i<heights.size(); i++){
        int tall = heights[0];
        if(heights[i]< tall){
            sum += (tall-heights[i]);
        }else{
            tall = heights[i];
            
        }
    }
    cout<< sum;
    return 0;
}