#include<iostream>
#include<vector>
using namespace std;

int main(){
    //no size needed; have ability to resize itself automatically when an element is inserted or deleted 
    //vector is use for faster access of element
    //vector<int> v; //Empty declartion //capacity = 0
    //vector<int> v(size, value)
    vector<int> v {10};//capacity = 1
    v.push_back(20);   //capacity = 2
    v.push_back(30);   //capacity = 4
    v.push_back(40);   //capacity = 4
    v.push_back(50);   //capacity = 8 //size = 5
    v.push_back(60);   //capacity = 8
    v.push_back(70);   //capacity = 8
    v.push_back(80);   //capacity = 8
    v.push_back(90);   //capacity = 16
    v.push_back(100);  //capacity = 16  
    v.pop_back();      //remove 100 from v //capacity = 16              
    v.pop_back();      //remove 90 from v  //capacity = 16              
    v.pop_back();      //remove 80 from v  //capacity = 16              
    v.shrink_to_fit(); //fit to the size   //capacity = size = 7
    return 0;
}