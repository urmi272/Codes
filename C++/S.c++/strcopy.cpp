#include<iostream>
using namespace std;
void mystrcopy(char *p,char *q);
int main()
{
    char t[10],s[10];
    cout<<"enter source string"<<endl;
    cin>>s;
    mystrcopy(t,s);
    cout<<"targated string is="<<t;
}
void mystrcopy(char *p,char *q)
{
    while(*q!='\0')
    {
        *p=*q;
        q++;
        p++;
    }
}
