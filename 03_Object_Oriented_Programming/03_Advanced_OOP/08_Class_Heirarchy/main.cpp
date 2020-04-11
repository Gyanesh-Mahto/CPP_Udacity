/*
Exercise: Class Hierarchy
Multi-level inheritance is term used for chained classes in an inheritance tree.
Have a look at the example in the notebook below to get a feel for multi-level inheritance.
*/


#include <assert.h>

// Declare Vehicle as the base class
class Vehicle
{
public:
    int wheels=0;
};

// Derive PassengerVehicle from Vehicle
class PassengerVehicle : public Vehicle
{
public:
    int seats=0;
};

// Derive Sedan from PassengerVehicle
class Sedan : public PassengerVehicle
{
public:
    int trunk_capacity=0;
};

// Update main to pass the tests
int main()
{
    Sedan sedan;
    sedan.wheels = 4;
    sedan.seats = 4;
    sedan.trunk_capacity = 3;
    
    assert(sedan.trunk_capacity == 3);
    assert(sedan.seats == 4);
    assert(sedan.wheels == 4);
}
