#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream fout;
    fout.open("readNwrite.dat", ios::out);
    fout<<"Hell is empty, and ";
    //fout<<" and All the Devils are here!"; //adding sentences
    fout.seekp(15); //taking pointer to that point
    fout<<"and all the Devils are here!"; //this will overwrite from that position
    fout<<"\n   -William Shakespeare";

    fout.close();

    fstream fin;
    fin.open("readNwrite.dat", ios::in);
    char ch;
    while(!fin.eof()){
        cout<<ch;
        //fin>>ch; // will only consider the latters
        ch = fin.get(); //will consider space
    }

    fin.close();
}