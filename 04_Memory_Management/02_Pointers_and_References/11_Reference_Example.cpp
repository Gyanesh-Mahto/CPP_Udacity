#include<iostream>
using namespace std;

// Declaring function:
// Prototype of this function
// has input parameters of constant referenced pointer to
// char data type
// Note: Notice that function doesn't have any return values.


void addSpaces(const char* &str1)
{
    char *temp=new char(sizeof(str1)*2);
    char *start=temp;
    while(*str1!='\0')
    {
        *temp++=*str1++;
        *temp++=' ';
    }
    str1=start;
}


int main()
{
    string str="Hello World";
    const char* ptr=str.c_str();
    cout<<"String is: "<<ptr<<endl;
    addSpaces(ptr);

    // Our string has been modified without any return value
    // key difference was that we used reference to send our
    // array of characters to this function
    // in this way we are ensuring that all of our changes
    // are going to affect our sent data and not copy input
    // parameters of function


    cout<<"String is: "<<ptr<<endl;
}

/*
String is: Hello World
String is: H e l l o   W o r l d
*/