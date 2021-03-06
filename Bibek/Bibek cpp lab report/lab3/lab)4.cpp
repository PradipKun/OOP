/*Create a class Polygon with data members and member function to read data members. Derive
two classes Rectangle and Triangle from Polygon class with appropriate member function to
calculate area of each rectangle and triangle.*/
#include<iostream>
using namespace std;
class Polygon
{ 
    protected:
    int length_height;
    int breadth;
    public:
    void readData()
    {
        cout<<"Enter length/height : ";
        cin>>length_height;
        cout<<"Enter breadth : ";
        cin>>breadth;
    }
};
class Rectangle: public Polygon
{
    public:
    int rect;
    void area()
    {
        readData();
        rect = length_height * breadth;
        cout<<"The area of rectangle is : "<<rect<<" m^2"<<endl;
    }
};
class Triangle: public Polygon
{
    public:
    float tri;
    void area()
    {
        readData();
        tri = 0.5*(length_height * breadth);
        cout<<"The area of triangle is : "<<tri<<" m^2"<<endl;
    }
};
int main()
{
    cout<<"For rectangle : "<<endl;
    Rectangle r;
    r.area();
    cout<<"For triangle : "<<endl;
    Triangle t;
    t.area();
    return 0;
}

