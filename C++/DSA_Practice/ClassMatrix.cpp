#include<iostream>
#include<vector>
using namespace std;
class matrix{
    int rows;
    int columns;
   
    public:
    void mat(int r, int c){
        rows=r;
        columns=c;
    }
    void display(){
    
        cout<<"the matrix is:";
         for(int i=0; i<=rows; i++){
            for(int j=0; j<=columns; j++){
                cout<<" ("<<i<<","<<j<<")"<<" ";
            }
         }

    }
    void getData(){
        cout<<"enter no. of rows: ";
        cin>>rows;
        cout<<"enter no. of columns: ";
        cin>>columns;
    }
};
int main(){
    matrix m;
    m.getData();
    m.display();
    return 0;
}