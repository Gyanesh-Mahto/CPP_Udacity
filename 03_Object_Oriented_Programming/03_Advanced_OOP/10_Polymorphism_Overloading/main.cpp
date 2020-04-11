/*
Instructions
Overloading can happen outside of an object-oriented context, too. In this exercise, you will practice overloading a normal function that is not a class 
member.

Create a function hello() that outputs, "Hello, World!"
Create a class Human.
Overload hello() by creating a function hello(Human human). This function should output, "Hello, Human!"
Create 2 more classes and use those classes to further overload the hello() function.

*/

#include<iostream>
using namespace std;

class Human
{};
class Dog
{};
class Cat
{};

void hello()
{
    cout<<"Hello, World!"<<endl;
}
void hello(string name)
{
    cout<<"Hello, "<<name<<endl;
}
void hello(Human human)
{
    cout<<"Hello, Human"<<endl;
}
void hello(Dog dog)
{
    cout<<"Hello, Dog"<<endl;
}
void hello(Cat cat)
{
    cout<<"Hello, Cat"<<endl;
}
int main()
{
    hello();
    hello("Xitiz");
    hello(Human());
    hello(Dog());
    hello(Cat());
}

/*
Hello, World!
Hello, Xitiz
Hello, Human
Hello, Dog
Hello, Cat
*/