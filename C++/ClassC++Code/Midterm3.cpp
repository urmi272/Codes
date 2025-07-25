#include<iostream>
using namespace std;
class Area
{
public:
    float radius, length, width, side;
    Area()
    {
        cout<<"Enter the radius:"<<endl;
        cin>>radius;
        cout<<"Enter the length and width:"<<endl;
        cin>>length>>width;
        cout<<"Enetr the side:"<<endl;
        cin>>side;
    }
    void getAreaofCir()
    {
        float cir=3.14*radius*radius;
        cout<<"Area of circle is:"<<cir<<endl;
    }
    void getAreaofRect()
    {
        float rect=length*width;
        cout<<"Area of Rectangle is:"<<rect<<endl;
    }
    void getAreaofsqur()
    {
        float sqr=side*side;
        cout<<"Area of square is:"<<sqr<<endl;
    }
};
int main()
{
    Area obj;
    obj.getAreaofCir();
    obj.getAreaofRect();
    obj.getAreaofsqur();
    return 0;
}
