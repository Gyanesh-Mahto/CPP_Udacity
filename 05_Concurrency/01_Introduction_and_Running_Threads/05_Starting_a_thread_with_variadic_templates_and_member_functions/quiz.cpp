#include <iostream>
#include <thread>
using namespace std;

class Vehicle
{
  private:
  int _id;
  string _name;

  public:
    Vehicle()
    {
      _id = 0;
    }
    void addID(int id)
    { 
      _id = id; 
    }

    void setName(string name)
    {
        _name=name;
    }

    void printID()
    { 
      cout << "Vehicle ID = " << _id << endl; 
    }

    void printName()
    {
        cout<<"Vehicle Name: "<<_name<<endl;
    }
    // TODO: Modify the Vehicle class as indicated in the instructions:
    /*
      Change the code from the previous example in a way that a new member _name
      variable of type string is added to the Vehicle class. Then, define a
      function setName which takes a string as an argument and assigns this to _name.
      The function setName needs to be started as a thread from main. Also, add a
      function printName to the Vehicle class which is used at the end of main to
      print the name to the console.
    */
};

int main()
{
  // create thread
  shared_ptr<Vehicle> v(new Vehicle);
  thread t1(&Vehicle::addID, v, 1);  // call member function on object v
  // TODO: Modify the main to start setName as a thread.
  // Also, add code to main to print the name of the vehicle.
    thread t2(&Vehicle::setName, v, "Maruti");

  // wait for thread to finish
  t1.join();
  t2.join();

  // print Vehicle id
  v->printID();
  v->printName();

  return 0;
}
/*
O/P:
----
Vehicle ID = 1
Vehicle Name: Maruti
*/