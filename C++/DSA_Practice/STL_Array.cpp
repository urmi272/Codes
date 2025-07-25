#include<iostream>
#include<array>
using namespace std;
int main(){
    array <int, 6> MyArr={1,2,3,4};
    cout<<"my array is: ";
    for (int i=0; i<6; i++){
        cout<<MyArr[i]<<", ";
    }
    cout<<endl;
    cout<<"Array at index 3 is: "<<MyArr.at(3)<<endl;
    //cout<<"Array at index 3 is: "<<MyArr.at(10)<<endl;// asking out of range will give you error
    cout<<"Array at index 5 is: "<<MyArr[5]<<endl;
    cout<<"Array at index 10 is: "<<MyArr[10]<<endl;// asking out of range will give you garbage value
    cout<<"First element is: "<<MyArr.front()<<endl;
    cout<<"last element is: "<<MyArr.back()<<endl;
    cout<<"Maximum size od ARRAY is: "<<MyArr.max_size()<<endl;
    cout<<"size of the array is: "<<MyArr.size()<<endl;
    MyArr.fill(40); //filling 40
    for (int i=0; i<6; i++){
        cout<<MyArr[i]<<", ";
    }
    cout<<endl;
    cout<<"will check if it's empty or not: "<<MyArr.empty()<<endl;

    return 0;
}
    //  at()
    //  get()
    //  operator[]
    //  front()
    //  back()
    //  size()
    //  max_size()
    //  swap()
    //  empty()
    //  fill()