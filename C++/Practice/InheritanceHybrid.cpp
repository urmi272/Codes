#include<iostream>
using namespace std;
class Publication{
    string Title;
    float price;
    public:
    void getdata(){
        cout<<"enter title: "<<endl;
        cin>>Title;
        cout<<"enter price: "<<endl;
        cin>>price; 
    }
    void putdata(){
        cout<<"Title is: "<<Title<<endl;
        cout<<"Price is: "<<price<<endl;
    }
};

class Sales{
    float arr[3];
    public:
    void getdata(){
        cout<<"enter all 3 months sales value:"<<endl;
        for(int i = 0; i<3; i++){
            cin>>arr[i];
        }
    }
    void putdata(){
        for (int i = 0; i<3; i++){
            cout<<"sales: "<<arr[i]<<" ";
        }
    }
};

class Book : public Publication, public Sales{
    int count;
    public:
    void getdata(){
        Publication::getdata();
        Sales::getdata();
        cout<<"enter count: "<<endl;
        cin>>count; 
    }
    void putdata(){
        Publication::putdata();
        Sales::putdata();
        cout<<"Count is: "<<count<<endl;
    }

};

class CD : public Publication, public Sales{
    float playing_time;
    public:
    void getdata(){
        Publication::getdata();
        Sales::getdata();
        cout<<"enter playing time: "<<endl;
        cin>>playing_time; 
    }
    void putdata(){
        Publication::putdata();
        Sales::putdata();
        cout<<"playing game is: "<<playing_time<<endl;
    }
};

int main(){
    Book b;
    b.getdata();
    b.putdata();
    CD cd;
    cd.getdata();
    cd.putdata();
    return 0;
}