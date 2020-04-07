/*
Exercise: Pi
class Sphere has a member const double pi. Experiment with specifying pi to be const, constexpr, and static. Which specifications work and which break? 
Do you understand why?
*/

#include<iostream>
using namespace std;

class Sphere
{
    private:
    static float const pi;
    float radius_;

    public:
    Sphere(float r);
    float GetRadius() const;
    float GetVolume() const;
};

float const Sphere::pi{3.14};   // TODO: Which specifications will work: const, constexpr, and static?

Sphere ::Sphere(float r)
    {
        if(r>=0)
        radius_=r;
        else
        {
        cout<<"Invalid Radius"<<endl;
        exit(1);
        }
    }

float Sphere :: GetRadius() const
    {
        return radius_;
    }

float Sphere :: GetVolume() const
    {
        float volume;
        volume=pi*4/3*radius_*radius_*radius_;
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
Volume of Sphere: 113.097
*/