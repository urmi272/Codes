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

class Book : public Publication{
    int count;
    public:
    void getdata(){
        Publication::getdata();
        cout<<"enter count: "<<endl;
        cin>>count; 
    }
    void putdata(){
        Publication::putdata();
        cout<<"Count is: "<<count<<endl;
    }

};

class CD : public Publication{
    float playing_time;
    public:
    void getdata(){
        Publication::getdata();
        cout<<"enter playing time: "<<endl;
        cin>>playing_time; 
    }
    void putdata(){
        Publication::putdata();
        cout<<"playing game is: "<<playing_time<<endl;
    }
};

int main(){
    Book b;
    b.getdata();
    b.putdata();
    CD tape;
    tape.getdata();
    tape.putdata();
    return 0;
}