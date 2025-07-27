#include <iostream>
using namespace std;

/*note if ur starting from 1 then use < instead of <= */

void print1(int n){ // n/i -> rows, m/j -> columns
    for (int i= 0; i< n; i++){          // *****
        for (int j = 0; j< n; j++){     // *****   
            cout<<"*";                  // *****
        }                               // *****
        cout<<endl;                     // *****
    }
    cout<<endl;
}
void print2(int n){
    for (int i =0; i< n ; i++){         // *
        for (int j = 0; j<=i; j++){     // **
            cout<<"*";                  // ***
        }                               // ****
        cout<<endl;                     // *****
    }
    cout<<endl;
}
void print3(int n){
    for (int i =0; i< n ; i++){         //0 //printing row number
        for (int j = 0; j<=i; j++){     //11
            cout<<i;                    //222
        }                               //3333 
        cout<<endl;                     //44444
    }
    cout<<endl;
}
void print4(int n){
    for (int i =0; i< n ; i++){         //0  //printing column number
        for (int j = 0; j<=i; j++){     //01
            cout<<j;                    //012
        }                               //0123 
        cout<<endl;                     //01234
    }
    cout<<endl;
}
void print5(int n){  
     /*note the changes for i=1 */
    for (int i = 1; i<=n; i++){            //1
        for (int j = 1; j<=i; j++){        //12
            cout<<j;                       //123
        }                                  //1234
        cout<<endl;                        //12345
    }
    cout<<endl;
}
void print6(int n){    
    for (int i =0; i< n ; i++){             //*****
        for (int j =0; j < n-i ; j++){      //****
            cout<<"*";                      //***
        }                                   //**
        cout<<endl;                         //*
    } 
    cout<<endl;
}
void print7(int n){ 
    for (int i = 1; i<=n; i++){            //12345
        for (int j =1; j<=n-i+1; j++){     //1234
            cout<<j;                       //123
        }                                  //12
        cout<<endl;                        //1
    }
    cout<<endl;
}
void print8(int n){
    for (int i =0; i<n ; i++){             //     *
        for (int j=0; j<n-i; j++){         //    **
            cout<<" ";                     //   ***
        }                                  //  ****
        for(int k=0; k<=i; k++){           // *****
            cout<<"*";
        }
        cout<<endl;                              
    }                        
    cout<<endl;     
}
void print9(int n){
    for (int i =0; i<n ; i++){ 
        for (int j=0; j<n-i; j++){         //     *
            cout<<" ";                     //    ***
        }                                  //   *****
        for(int k=0; k<=2*i; k++){         //  *******
            cout<<"*";                     // *********
        }
        cout<<endl;                              
    }                        
    cout<<endl;     
}
void print10(int n){
    for (int i =0; i<=n ; i++){            // *********
        for (int j=0; j<=i; j++){          //  *******
            cout<<" ";                     //   *****
        }                                  //    ***
                                           //     *
        for (int k = 0; k<2*(n-i)-1; k++){  // or 2n-(2i+1)
            cout<<"*";
        }
        cout<<endl;
    }
}
void print11(int n){
    for (int i =0; i<=n ; i++){
        
    }
}

int main(){
    // int z;
    // cout<<"enter number of test cases: ";
    // cin>>z;
    // for(int i=0; i<z; i++){
        int x;
        cout<<"enter a number: ";
        cin>>x;
        print1(x);
        print2(x);
        print3(x);
        print4(x);
        print5(x);
        print6(x);
        print7(x);
        print8(x);
        print9(x);
        print10(x);
    //}
    return 0;
}