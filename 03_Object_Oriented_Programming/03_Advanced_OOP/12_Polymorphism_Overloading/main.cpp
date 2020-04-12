/*
Instructions
Create a class Dog to inherit from Animal.
Define Dog::Talk() to override the virtual function Animal::Talk().
Confirm that the tests pass.
*/

#include<iostream>
#include<cassert>
using namespace std;

class Animal
{
public:
  virtual string Talk() const;
};

class Cat
{
public:
  string Talk() const 
  {
      return string("Meow"); 
  }
};

class Dog
{
    public:
    string Talk() const
    {
        return string("Bark");
    }
};

int main()
{
    Cat cat;
    cout<<cat.Talk()<<endl;
    Dog dog;
    assert(dog.Talk()=="Bark");
}