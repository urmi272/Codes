#include<iostream>
using namespace std;
class creature
{
  private:
int yearofBirth;
  public:
creature()
{
yearofBirth=1970;
cout<<"constructure called"<<endl;
}

~creature()
{
cout<<"destructure called"<<endl;
}
};
int main()
{
cout<<"main start"<<endl;
{
  creature obj;
}
cout<<"main end"<<endl;
return 0;
}
