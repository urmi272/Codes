#include<iostream>
using namespace std;
class Circle
{
 	private:
  double radius;
 	public:
 // Circle()
 //{
   // radius = 0.0;
 //}
  Circle(int r);

  void setRadius(double r)
  {
      radius = r;
      }

  double getDiameter()
  {
       return radius *2;
       }

  double getArea();

  double getCircumference();
};
Circle::Circle(int r)
{
 	radius = r;
}
double Circle::getArea()
{
 	return radius * radius * (22.0/7);
}
double Circle:: getCircumference()
{
 	return 2 * radius  * (22.0/7);
}

int main()
{
	//Circle c;
	//cout<<"The are of c:"<<c.getArea()<<endl;
Circle c1(7);
	Circle *cp1 = &c1;
	Circle *cp2 = new Circle(9);
	//cout<<"The are of c:"<<c.getArea()<<endl;
	cout<<"The are of c1:"<<c1->getArea()<<endl;
   cout<<"The are of cp1:"<<cp1->getArea()<<endl;
	 cout<<"The are of cp2:"<<cp2->getArea();

}
