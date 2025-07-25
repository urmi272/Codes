#include<iostream>
using namespace std;
class Array{
    int arr[10],n;
    public:
    void getdata(){
        cout<<"enter the no. of array: "<<endl;
        cin>>n;
        for(int i = 0; i<n; i++){
            cout<<"enter element"<<" ";
            cin>>arr[i];
        }
        cout<<"your array is: "<<endl;
        for(int i = 0; i<n; i++){
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }

    void avg(){
        int sum;
        for(int i = 0; i<n; i++){
            sum +=arr[i]; 
        }
        cout<< "sum is: "<<sum<< endl;
        cout<<"avg is: "<<(sum/n)<<endl;
    }
    void swap(){
        int temp;
        temp =arr[0];
        arr[0]= arr[n-1];
        arr[n-1] = temp;
        cout<<"after swapping your array is: "<<endl;
        for(int i = 0; i<n; i++){
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
    void reverse(){
        int j, tem;
        for(int i = 0,j = n-1; i<n/2; i++,j--){
            tem = arr[i];
            arr[i]= arr[j];
            arr[j]= tem;
        }
        cout<< "reverse of array is: "<<endl;
        for(int i = 0; i<n; i++){
            cout<<arr[i]<< " ";
        }
    }
};
int main(){
    Array z;
    z.getdata();
    z.avg();
    z.swap();
    z.reverse();
    return 0;
}