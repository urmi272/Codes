#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("writing.dat");
    fout<<"Hii, this is Urmi";
}