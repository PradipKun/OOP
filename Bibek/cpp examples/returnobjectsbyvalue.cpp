//returning objects
//return by value
#include<iostream>
using namespace std;
class complex
{
    int real,img;
public:
    void getdata()
    {
        cout<<"Enter the value of real and imaginary"<<endl;
        cin>>real>>img;
    }
    void display()
    {
        cout<<real<<"+i"<<img<<endl;
    }
    complex addcomplex(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
};
int main(){
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c2.addcomplex(c1);
    c3.display();
    return 0;

}
