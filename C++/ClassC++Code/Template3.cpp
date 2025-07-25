 #include <iostream>
using namespace std;
template<class T, class X>
X add(T a,X b)
{
    X result = a+b;
    return result;

}
int main()
{
  int i =2;
  int j =3;
  float m = 2.3f;
  float n = 1.2f;
  cout<<"Addition of i and j is :"<<add(i,j);
  cout<<'\n';
  cout<<"Addition of m and n is :"<<add(m,n);
  return 0;
}
