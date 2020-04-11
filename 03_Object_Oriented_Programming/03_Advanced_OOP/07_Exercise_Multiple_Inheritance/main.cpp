/*
Multiple Inheritance
In this exercise, you'll get some practical experience with multiple inheritance. If you have class Animal and another class Pet, then you can construct 
a class Dog, which inherits from both of these base classes. In doing this, you are able to incorporate attributes of multiple base classes.

Instructions
Review class Dog, which inherits from both Animal and Pet.
Declare a class Cat, with a member attribute color, that also inherits from both Animal and Pet.
Instantiate an object of class Cat.
Configure that object to pass the tests in main().

*/
#include<iostream>
using namespace std;

class Animal
{
    protected:
    int leg=4;
    int age=0;
};

class Pet
{
    protected:
    string name;
};

class Dog : public Animal, public Pet
{
    private:
    string breed;
    public:
    Dog(string b, string n, int a)
    {
        name=n;
        breed=b;
        age=a;
    }
    void GetInfo()
    {
        cout<<"Dog Name: "<<name<<endl;
        cout<<name<<"'s Breed: "<<breed<<endl;
        cout<<name<<"'s Age: "<<age<<endl;
    }
};

class Cat : public Animal, public Pet
{
    private:
    string color;
    public:
    Cat(string c, string n, int a)
    {
        color=c;
        name=n;
        age=a;
    }

    void GetInfo()
    {
        cout<<"Cat Name: "<<name<<endl;
        cout<<name<<"'s Color: "<<color<<endl;
        cout<<name<<"'s Age: "<<age<<endl;
    }
};

int main()
{
    Dog d1("Hound", "Jackie", 10);
    d1.GetInfo();
    Cat c1("Yellow", "Rosy", 3);
    c1.GetInfo()
}
/*
Dog Name: Jackie
Jackie's Breed: Hound
Jackie's Age: 10
Cat Name: Rosy
Rosy's Color: Yellow
Rosy's Age: 3
*/