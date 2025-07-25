#include<iostream>
using namespace std;
class Array{

     int Arr[100],n,i,sum=0;
     public:
	 void getdata(){
        cout<<"Enter number of elements you want to insert: ";
        cin>>n;
        for(i=0;i<n;i++){
		cout<<"Enter element "<<i+1<<":"<<endl;
		cin>>Arr[i];
        }
    };
    void Avg()
    {
       for (int i = 0; i < n; i++)
        sum += Arr[i];
        cout<<"\nThe sum of Array is :"<<sum<<endl;
	    cout<<"\nThe average of Array is :"<<sum/i<<endl;
    };
    void swap()
    {
     cout<<"\nSwapped Array:"<<endl;
     for(int i=0;i<n;i++){
        cout<<Arr[i]<<" ";
       }
    };
    void reverse(){
        int temp,j;
        for(i=0,j=n-1;i<n/2;i++,j--)
	 {
		temp=Arr[i];
		Arr[i]=Arr[j];
		Arr[j]=temp;
	 }
	    cout<<"\nReverse array:"<<endl;
	    for(i=0;i<n;i++)
		cout<<Arr[i]<<" ";
    };
    void larg(){
        int m = sizeof(n) / sizeof(Arr[0]);
        for (i = 1; i < m; i++) 
        if (Arr[i] > Arr[0]) 
            Arr[0] = Arr[i];
        {
            cout << endl << "Largest element = " << Arr[0]<<endl;
        }
    }
};
int main(){
    Array a;
    a.getdata();
    a.Avg();
    a.swap();
    a.reverse();
    a.larg();
    return 0;
}