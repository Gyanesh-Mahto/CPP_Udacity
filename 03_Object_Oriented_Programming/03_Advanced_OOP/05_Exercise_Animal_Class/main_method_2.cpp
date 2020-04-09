/*
Inheritance
In this exercise you will practice building an inheritance hierarchy.

Instructions
Define a class Animal.
Define 3 member variables: color, name, age.
Define a derived class Snake that inherits from the base class Animal.
Create a member variable length for the Snake class.
Create a derived class Cat that inherits from the base class Animal.
Create a member variable height for the Cat class.
Create MakeSound() member functions for each of the derived classes.
In the main() function instantiate Snake and Cat objects. Initialize both their unique and derived attributes. Program them to make a sound.
*/
#include<iostream>
using namespace std;

class Animal
{
    public:
    string color="None";
    string name="None";
    int age{0};
    Animal(string n, string c, int a)
    {}
    Animal(){}
};

class Snake : public Animal
{
    private:
    int length_in_cms{0};

    public:
    Snake(int l, string n, string c, int a)
    {
        if(l>0)
        length_in_cms=l;
        Animal::name=n;
        Animal::color=c;
        Animal::age=a;
    }
    void MakeSound()
    {
    cout<<"Sound: Hisssss"<<endl;
    }
    void GetInfo()
    {
        cout<<"Name of Snake: "<<name<<endl;
        cout<<"Color of "<<name<<" : "<<color<<endl;
        cout<<"Age of "<<name<<" : "<<age<<" years"<<endl;
        cout<<"Length of "<<name<<" : "<<length_in_cms<<" cms"<<endl;
    }
};

class Cat : public Animal
{
    private:
    int height_in_cms{0};

    public:
    public:
    Cat(int h, string n, string c, int a)
    {
        if(h>0)
        height_in_cms=h;
        Animal::name=n;
        Animal::color=c;
        Animal::age=a;
    }
    void MakeSound()
    {
    cout<<"Sound: Hisssss"<<endl;
    }
    void GetInfo()
    {
        cout<<"Name of Cat: "<<name<<endl;
        cout<<"Color of "<<name<<" : "<<color<<endl;
        cout<<"Age of "<<name<<" : "<<age<<" years"<<endl;
        cout<<"Length of "<<name<<" : "<<height_in_cms<<" cms"<<endl;
    }

};

int main()
{
    Snake snake1(800, "Anaconda", "Black", 20);
    snake1.GetInfo();
    snake1.MakeSound();

    Cat cat1(20, "Bengal Cat", "Yellow", 2);
    cat1.GetInfo();
    cat1.MakeSound();
}

/*
O/P:
Name of Snake: Anaconda
Color of Anaconda : Black
Age of Anaconda : 20 years
Length of Anaconda : 800 cms
Sound: Hisssss
Name of Cat: Bengal Cat
Color of Bengal Cat : Yellow
Age of Bengal Cat : 2 years
Length of Bengal Cat : 20 cms
Sound: Hisssss
*/