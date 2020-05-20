#include<iostream>
#include<thread>
using namespace std;

class Vehicle
{
    private:
    int _id=0;

    public:
    Vehicle()
    {
        _id=0;
    }

    void addID(int id)
    {
        _id=id;
    }

    void printID()
    {
        cout<<"Vehicle ID: "<<_id<<endl;
    }
};

int main()
{
    shared_ptr<Vehicle> v(new Vehicle);

    // create thread
    thread t(&Vehicle::addID, v, 1);

    // wait for thread to finish
    t.join();

    // print Vehicle id
    v->printID();
}
/*
O/P:
----
Vehicle ID: 1
*/