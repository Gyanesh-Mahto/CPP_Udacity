/*
Exercise: Pyramid Class
Create a class: Pyramid.
Create 3 attributes: length, width, and height.
Create a constructor to initialize all the attributes.
Create accessor and mutator functions for all attributes.
Think about the appropriate invariants and enforce them by throwing exceptions.
Create a member function to calculate the volume of the pyramid.
Optional: create a member function to calculate the surface area of the pyramid.
Volume
The volume of a pyramid is length * width * height / 3
*/
#include<iostream>
using namespace std;

class Pyramid
{
double length;
double width;
double height;

public:
Pyramid(double l, double w, double h);

double GetLength();
double GetWidth();
double GetHeight();

double Volume();
double Surface_Area();
};

Pyramid::Pyramid(double l=0, double w=0, double h=0)
{
    length=l;
    width=w;
    height=h;
}

double Pyramid::GetLength()
{
    return length;
}
double Pyramid::GetWidth()
{
    return width;
}
double Pyramid::GetHeight()
{
    return height;
}

double Pyramid::Volume()
{
    double volume;
    volume=(length * width * height / 3);
    return volume;
}
double Pyramid::Surface_Area()
{
    double surface_area;
    surface_area=((length*width)+((0.5)*(2*length+2*width)*height));
    return surface_area;
}

int main()
{
    Pyramid p1(12.23, 22.16, 23.34);
    cout<<"Volume: "<<p1.Volume()<<endl;
    cout<<"Surface Area: "<<p1.Surface_Area()<<endl;

}
/*
O/P:
Volume: 2108.51
Surface Area: 1073.68
*/