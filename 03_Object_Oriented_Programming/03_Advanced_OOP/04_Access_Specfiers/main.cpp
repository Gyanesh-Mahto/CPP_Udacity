/*
Instructions
Update the derived classes so that one has protected inheritance and one has private inheritance.
Try to access a protected member from main(). Is it possible?
Try to access a private member from main(). Is it possible?
Try to access a member of the base class from within the derived class that has protected inheritance. Is it possible?
Try to access a member of the base class from within the derived class that has private inheritance. Is it possible?
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

class Bicycle : protected Vehicle
{
    private:
    string name;
    public:
    Bicycle()
    {}
    void SetName(string s)
    {
        name=s;
    }
};

class Truck : private Vehicle
{
    string name;
    public:
    Truck()
    {}
    void SetName(string s)
    {
        name=s;
    }
};

int main()
{
    Vehicle v1;
    v1.Print();
    Car c1;
    c1.SetName("Maruti");   //Pass
    c1.color="Red";   //Pass
    c1.weight=4000;   //Pass
    c1.wheels=4;   //Pass
    c1.Print();   //Pass
    Bicycle b1;   //Pass
    b1.SetName("Ranger");   //Pass
    b1.color="Black";   //Fail
    b1.weight=50;   //Fail
    b1.wheels=2;   //Fail
    b1.Print();   //Fail
    b1.SetName("Ordan");//Pass
    Truck t1;
    t1.SetName("Mahindra");//Pass
    t1.color="Green";   //Fail
    t1.weight=12000;   //Fail
    t1.wheels=18;   //Fail
    t1.Print();   //Fail
    t1.SetName("TATA");//Pass
}