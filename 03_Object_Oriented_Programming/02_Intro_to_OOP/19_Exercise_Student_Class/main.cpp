/*
Exercise: Student Class
Your goal in this lab is to write a class called Student that will hold data about a particular student. Your class simply needs to store the data and 
provide accessors and mutators.

Directions
-->Add 3 private member variables to the class:
-Name
-Grade (e.g. 9th grade)
-Grade Point Average
-->Write a public constructor function to set the private attributes.
-->Create public member functions to set each of the member variables. Before setting the values verify that:
-->Grade is from 0 (kindergarten) to 12
-->GPA is from 0.0 to 4.0
-->The function must either throw an exception if any of the invariants are violated
-->Within the main() (outside of the class), declare an object of type Student and test out each of the member function calls.
*/
#include<iostream>
using namespace std;

class Student_Class
{
    private:
    string name;
    int grade;
    float gpa;

    public:
    void SetName(string n);
    void SetGrade(int g);
    void SetGPA(float gp);

    string GetName();
    int GetGrade();
    float GetGPA();
};

void Student_Class::SetName(string n)
{
    name=n;
}

void Student_Class:: SetGrade(int g)
{
   if(g>=0 && g<=12)
   grade=g;
   else
   throw "Invalid Grade Entered";
}

void Student_Class::SetGPA(float gp)
{
    if(gp>=0.0 && gp<=4.0)
   gpa=gp;
   else
   throw "Invalid GPA Entered";
}

string Student_Class::GetName()
{
    return name;
}
int Student_Class::GetGrade()
{
    return grade;
}
float Student_Class::GetGPA()
{
    return gpa;
}

int main()
{
    Student_Class s1;
    s1.SetName("Xinhua");
    try
    {
        s1.SetGrade(11);
    }
    catch(const char* msg)
    {
        cerr << msg << endl;
        exit(1);
    }
    try
    {
        s1.SetGPA(4.3);
    }
    catch(const char* msg)
    {
        cerr << msg << endl;
        exit(1);
    }
    
    cout<<"Name: "<<s1.GetName()<<endl<<"Grade: "<<s1.GetGrade()<<endl<<"GPA: "<<s1.GetGPA()<<endl;
}