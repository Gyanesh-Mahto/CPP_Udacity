/*
Mutator Functions
A mutator ("setter") function can apply logic ("invariants") when updating member data.

Exercise: Car Class
In this lab you will create a setter method that receives data as an argument an converts it to a different type. Specifically, you will receive a string 
as input and convert it to a character array.

-> Create a class called Car.
-> Create 3 member variables: horsepower, weight and brand. The brand attribute must be a character array.
-> Create accessor and mutator functions for all member data. The mutator function for brand must accept a C++ string as a parameter and convert that string 
into a C-style string (a character array ending in null character) to set the value of brand.
-> The accessor function for the brand must return a string, so in this function you first will need to convert brand to std::string, and then return it.
*/
#include<iostream>
using namespace std;

class Car
{
double horsepower;
double weight;
char brand[100];

public:
void SetHorsePower(double hp);         //Mutators
void SetWeight(double w);
void SetBrandName(string b);

double GetHorsePower();            //Accessors
double GetWeight();
string GetBrandName();
};

void Car:: SetHorsePower(double hp)
{
    horsepower=hp;
}
void Car:: SetWeight(double w)
{
    weight=w;
}
void Car:: SetBrandName(string b)
{
    int i,len;
    for(len=0; b[len]; len++);
    for(i=0;i<len; i++)
    {
    brand[i]=b[i];
    }
    brand[i]='\0';
}

double Car:: GetHorsePower()
{
    return horsepower;
}
double Car:: GetWeight()
{
    return weight;
}
string Car:: GetBrandName()
{
    return brand;
}

int main()
{
    Car c1;
    c1.SetBrandName("Mercedes");
    c1.SetHorsePower(7000.00);
    c1.SetWeight(5000);

    cout<<"Brand Name: "<<c1.GetBrandName()<<endl<<"Horse Power: "<<c1.GetHorsePower()<<endl<<"Weight: "<<c1.GetWeight()<<endl;
}
/*
O/P:
Brand Name: Mercedes
Horse Power: 7000
Weight: 5000
*/