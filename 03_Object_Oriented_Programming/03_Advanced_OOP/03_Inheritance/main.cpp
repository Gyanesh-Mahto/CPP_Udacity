/*
Instructions
Add a new member variable to class Vehicle.
Output that new member in main().
Derive a new class from Vehicle, alongside Car and Bicycle.
Instantiate an object of that new class.
Print the object.
*/
#include<iostream>
using namespace std;

class Vehicle
{
    private:
    string model_name;

    public:
    int wheels = 0;
    int weight=0;
    string color = "blue";
    void SetName(string n)
    {
        model_name=n;
    }
    void Print()
    {
        cout<<"This "<<model_name<<" vehicle "<<" of "<<color <<" color "<<" has "<<wheels<<" wheels and total weight is "<<weight<<" Kgs"<<endl;
    }
};

class Car: public Vehicle
{
    public:
    Car()
    {}

};

class Bicycle : public Vehicle
{
    public:
    Bicycle()
    {}
};

int main()
{
    Vehicle v1;
    v1.Print();
    Car c1;
    c1.SetName("Maruti");
    c1.color="Red";
    c1.weight=4000;
    c1.wheels=4;
    c1.Print();
    Bicycle b1;
    b1.SetName("Ranger");
    b1.color="Black";
    b1.weight=50;
    b1.wheels=2;
    b1.Print();
}

/*
O/P:
This  vehicle  of blue color  has 0 wheels and total weight is 0 Kgs
This Maruti vehicle  of Red color  has 4 wheels and total weight is 4000 Kgs
This Ranger vehicle  of Black color  has 2 wheels and total weight is 50 Kgs
*/
