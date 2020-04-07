/*
Exercise: Sphere Class
In this exercise you will practice abstraction by creating a class which represents a sphere.

Declare:

1. A constructor function that takes the radius as an argument
2. A member function that returns the volume

Directions
1. Define a class called Sphere.
2. Add one private member variable: radius.
3. Define a constructor to initialize the radius.
4. Define an accessor method that returns the radius.
5. Define a member function to return the volume of the sphere.
6. Write a main() function to initialize an object of type Sphere.
*/
#include<iostream>
using namespace std;

class Sphere
{
    private:
    float radius_;

    public:
    Sphere(float r);
    float GetRadius();
    float GetVolume();
};

Sphere ::Sphere(float r)
    {
        radius_=r;
    }

float Sphere :: GetRadius()
    {
        return radius_;
    }

float Sphere :: GetVolume()
    {
        float volume;
        volume=3.142*4/3*radius_*radius_*radius_;
        return volume;
    }

int main()
{
    float rad;
    cout<<"Please enter any radius: "<<endl;
    cin>>rad;
    Sphere s1(rad);
    cout<<"Radius of Sphere: "<<s1.GetRadius()<<endl<<"Volume of Sphere: "<<s1.GetVolume()<<endl;
}
/*
Please enter any radius:
3
Radius of Sphere: 3
Volume of Sphere: 113.112
*/