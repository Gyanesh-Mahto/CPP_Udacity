/*
Virtual Functions
-----------------
Virtual functions are a polymorphic feature. These functions are declared (and possibly defined) in a base class, and can be overridden by derived classes.

This approach declares an interface at the base level, but delegates the implementation of the interface to the derived classes.

In this exercise, class Shape is the base class. Geometrical shapes possess both an area and a perimeter. Area() and Perimeter() should be virtual 
functions of the base class interface. Append = 0 to each of these functions in order to declare them to be "pure" virtual functions.

A pure virtual function is a virtual function that the base class declares but does not define.

A pure virtual function has the side effect of making its class abstract. This means that the class cannot be instantiated. Instead, only classes that 
derive from the abstract class and override the pure virtual function can be instantiated.

class Shape {
    public:
        Shape() {}
        virtual double Area() const = 0;
        virtual double Perimeter() const = 0;
};
Virtual functions can be defined by derived classes, but this is not required. However, if we mark the virtual function with = 0 in the base class, then 
we are declaring the function to be a pure virtual function. This means that the base class does not define this function. A derived class must define 
this function, or else the derived class will be abstract.

"Overriding" a function occurs when a derived class defines the implementation of a virtual function that it inherits from a base class.

It is possible, but not required, to specify a function declaration as override.

Instructions
Create base class called Shape.
Define pure virtual functions (= 0) for the base class.
Write the derived classes.
Inherit from class Shape.
Override the pure virtual functions from the base class.
Test in main()
*/
#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14159

class Shape
{
    public:
    Shape()
    {}
    virtual double Area() const=0;
    virtual double Perimeter() const = 0;
};

class Rectangle : public Shape
{
    private:
    int length;
    int width;

    public:
    Rectangle(int l, int w)
    {
        if(l>=0)
        length=l;
        if(w>=0)
        width=w;
    }
    virtual double Area() const override
    {
        return length*width;
    }
    virtual double Perimeter() const override
    {
        return (2*(length+width));
    }
};

class Circle : public Shape 
{
    private:
    double radius_;
public:
  Circle(double radius) : radius_(radius) {}
  double Area() const override 
  { 
      return pow(radius_, 2) * PI;  // specified as an override function
  }
  double Perimeter() const override 
  { 
      return 2 * radius_ * PI;  // specified as an override function
  }
};
int main()
{
    int len, wid;
    cout<<"Enter length: "<<endl;
    cin>>len;
    cout<<"Enter Width: "<<endl;
    cin>>wid;
    Rectangle R1(len,wid);
    cout<<"Rectangle's Area: "<<R1.Area()<<endl;
    cout<<"Rectangle's Perimeter: "<<R1.Perimeter()<<endl;

    int rad;
    cout<<"Enter Radius: "<<endl;
    cin>>rad;
    Circle c1(rad);
    cout<<"Circle's Area: "<<c1.Area()<<endl;
    cout<<"Circle's Perimeter: "<<c1.Perimeter()<<endl;
}
/*
O/P:
Enter length:
5
Enter Width:
5
Rectangle's Area: 25
Rectangle's Perimeter: 20
Enter Radius:
5
Circle's Area: 78.5397
Circle's Perimeter: 31.4159
*/
