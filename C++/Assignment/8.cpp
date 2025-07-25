#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("newfile.dat");
    fout<<"THIS_IS_MY_C++_LAB_ASSIGNMENT";
}
