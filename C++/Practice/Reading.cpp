#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin;
    char ch;
    fin.open("writing.dat");
    while(!fin.eof()){
        ch = fin.get(); //fin>>ch;
        cout<<ch;
    }
    fin.close();
}