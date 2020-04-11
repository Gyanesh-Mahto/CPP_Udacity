/*
Friends
In C++, friend classes provide an alternative inheritance mechanism to derived classes. The main difference between classical inheritance and friend 
inheritance is that a friend class can access private members of the base class, which isn't the case for classical inheritance. In classical inheritance, 
a derived class can only access public and protected members of the base class.

Instructions
In this exercise you will experiment with friend classes. In the notebook below, implement the following steps:

Declare a class Rectangle.
Define a class Square.
Add class Rectangle as a friend of the class Square.
Add a private attribute side to class Square.
Create a public constructor in class Square that initializes the side attribute.
Add private members width and height to class Rectangle.
Add a Rectangle() constructor that takes a Square as an argument.
Add an Area() function to class Rectangle.

*/
#include<iostream>
using namespace std;
class Rectagle;

class Square
{
    private:
    int side;
    friend class Rectangle;
    public:
    Square(int s)
    {
        side=s;
    }
};

class Rectangle
{
    private:
    int width;
    int height;
    public:
    Rectangle(Square& s):width(s.side), height(s.side)
    {};
    int Area()
    {
        int area;
        area=width*height;
        return area;
    }

};

int main()
{
    int s;
    cout<<"Please enter size of side: ";
    cin>>s;
    Square s1(s);
    Rectangle R1(s1);
    cout<<"Area of Square: "<<R1.Area()<<endl;
}