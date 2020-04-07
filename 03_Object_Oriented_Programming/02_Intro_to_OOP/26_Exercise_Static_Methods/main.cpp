/*
Exercise: Static Method
In addition to static member variables, C++ supports static member functions (or "methods"). Just like static member variables, static member functions 
are instance-independent: they belong to the class, not to any particular instance of the class.

One corollary to this is that we can method invoke a static member function without ever creating an instance of the class.

You will try just that in this exercise.

Instructions
Refactor class Sphere to move the volume calculation into a static function.
Verify that the class still functions as intended.
Make that static function public.
Call that static function directly from main() to calculate the hypothetical volume of a sphere you have not yet instantiated.
*/
#include<iostream>
using namespace std;

class Sphere
{
    private:
    static float constexpr pi{3.14159};

    public:
    static float Volume(int radius) //refactor class Sphere to move the volume calculation into a static function.
    {                               //Make that static function public.
        float volume;
        if(radius>=0)
        {
            volume=pi*4/3*radius*radius*radius;
            return volume;
        }
        else
        {
            cout<<"Invalid Radius"<<endl;
            exit(1);
        }
        

    }
};

int main()
{
    float rad;
    cout<<"Please enter Radius: "<<endl;
    cin>>rad;
    cout<<"Volume of Sphere: "<<Sphere::Volume(rad)<<endl;  //Call that static function directly from main() to calculate the hypothetical volume of a sphere you have not yet instantiated.
}