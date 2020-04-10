/*
In this example, you'll practice working with composition in C++.

Instructions
In this exercise, you will start with a LineSegment class and create a Circle class.

Note that you will compose Circle from LineSegment, instead of inheriting Circle from LineSegment. Specifically, the length attribute from LineSegment 
will become the circle's radius.

Create a class LineSegment.
Declare an attribute length in class LineSegment.
Define pi (3.14159) with a macro.
Create a class Circle, composed of a LineSegment that represent's the circle's radius. Use this radius to calculate the area of the circle (area of a 
circle = \pi r^2πr 
2).
Verify the behavior of Circle in main().
*/
#include<iostream>
#include<cmath>
using namespace std;

#define pi 3.14     //Define pi (3.14159) with a macro.

class LineSegment   //Create a class LineSegment.
{
    protected:
    float length;   //Declare an attribute length in class LineSegment.
    public:
    void SetLength(float l)
    {
        if(l>=0)
        length=l;
    }
    float GetLength()
    {
        return length;
    }
};

class Circle    //Create a class Circle, composed of a LineSegment that represent's the circle's radius. Use this radius to calculate the area of the circle 
{
    private:
    LineSegment& radius_;
    public:
    float radius;
    Circle(LineSegment &l):radius_(l)
    {}
    
    void SetRadius(LineSegment& r)
    {
        radius_=r;
    }

    float Area()
    {
        float area;
        area=pi*pow(Circle::radius_.GetLength(),2);
        return area;
    }
};

int main()
{
    LineSegment rad;
    int linesegment;
    cout<<"Please enter linesegment: ";
    cin>>linesegment;
    rad.SetLength(linesegment);
    Circle c1(rad);
    cout<<"Area of a circle: "<<c1.Area()<<endl;
}
/*
O/P:
Please enter linesegment: 5
Area of a circle: 78.5
*/