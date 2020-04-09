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
    private:
    string color;
    string name;
    int age{0};

    public:
    void SetName(string n)
    {
        name=n;
    }
    void SetColor(string c)
    {
        color=c;
    }
    void SetAge(int a)
    {
        age=a;
    }
    void print()
    {
    cout<<"Name of the Animal: "<<name<<endl<<"Color of "<<name<<" : "<<color<<endl<<"Age of Animal: "<<age<<endl;
    }
};

class Snake : public Animal
{
    private:
    int length_in_cms{0};

    public:
    void SetLength(int l)
    {
        if(l>0)
        length_in_cms=l;
    }
    void length_print()
    {
        cout<<"Length of Snake: "<<length_in_cms<<endl;
    }
    void MakeSound()
    {
    cout<<"Sound: Hisssss"<<endl;
    }
};

class Cat : public Animal
{
    private:
    int height_in_cms{0};

    public:
    void SetHeight(int h)
    {
        if(h>0)
        height_in_cms=h;
    }
    void height_print()
    {
        cout<<"Height of Cat: "<<height_in_cms<<endl;
    }
    void MakeSound()
    {
    cout<<"Meow"<<endl;
    }

};

int main()
{
    Snake snake1;
    snake1.SetName("Anaconda");
    snake1.SetColor("Black");
    snake1.SetLength(800);
    snake1.SetAge(20);
    snake1.print();
    snake1.MakeSound();
    snake1.length_print();

    Cat cat1;
    cat1.SetName("Bengal Cat");
    cat1.SetColor("Yellow");
    cat1.SetHeight(30);
    cat1.SetAge(2);
    cat1.print();
    cat1.MakeSound();
    cat1.height_print();
}