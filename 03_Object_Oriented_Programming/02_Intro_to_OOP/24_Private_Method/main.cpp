/*
Exercise: Private Method
Abstraction is used to expose only relevant information to the user. By hiding implementation details, we give ourselves flexibility to modify how the 
program works. In this example, you'll practice abstracting implementation details from the user.

Directions
In this exercise, you'll update the class Sphere so that it becomes possible to change the radius of a sphere after it has been initialized. In order to 
do this, you'll move the two class invariants into private member functions.

1. Move the range-check on radius_ into a private member function.
2. Move the volume_ calculation, which depends on the value of radius_ into the same private member function.
3. Verify that the class still functions correctly.
4. Add a mutator method to change the radius of an existing Sphere.
5. Verify that the mutator method successfully updates both the radius and the volume.
*/
#include<iostream>
using namespace std;

class Sphere
{
    private:
    float radius_;
    float volume_;
    void update_(float radius)
    {
        if(radius>=0)
        {
        radius_=radius;
        volume_=3.142*4/3*radius_*radius_*radius_;
        }
    }

    public:
    Sphere(float r)
    {
        update_(r);
    }
    
    int Getradius() const
    {
    return radius_;
    }
    
    void SetRadius(int rad)
    {
        update_(rad);
    }

    float GetVolume() const
    {
        return volume_;
    }
};

int main()
{
    float rad;
    cout<<"Please enter any radius: "<<endl;
    cin>>rad;
    Sphere s1(rad);
    cout<<"Radius of Sphere: "<<s1.Getradius()<<endl<<"Volume of Sphere: "<<s1.GetVolume()<<endl;
}

/*
O/P:
Please enter any radius:
3
Radius of Sphere: 3
Volume of Sphere: 113.112
*/