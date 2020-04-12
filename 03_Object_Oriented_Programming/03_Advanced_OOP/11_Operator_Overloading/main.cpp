/*
Exercise: Operator Overload
Thus far, you've experimented with two types of polymorphism in C++: run time and compile time polymorphism.

You've already seen how compile time polymorphism is achieved with function overloading. In this exercise you'll see how to achieve polymorphism with 
operator overloading as well. In fact, you can choose any operator from the ASCII table and give it your own set of rules!

Operator overloading can be useful for many things. Consider the + operator. We can use it to add ints, doubles, floats, or even std::strings.

In order to overload an operator, use the operator keyword in the function signature:

Point operator+(const Point& addend) {
  //...logic to add complex numbers
}
Imagine vector addition. You might want to perform vector addition on a pair of points to add their x and y components. The compiler won't recognize 
this type of operation on its own, because this data is user defined. However, you can overload the + operator so it performs the action that you want 
to implement.

Instructions
Define class Point.
Declare a prototype of overload method for + operator.
Confirm the tests pass.
*/
#include<iostream>
using namespace std;

class Point
{
    private:
    int real;
    int imag;

    public:
    Point(int r=0, int i=0)
    {
        real=r;
        imag=i;
    }
    
    Point operator+(Point &n)
    {
        Point res;
        res.real=real+n.real;
        res.imag=imag+n.imag;
        return res;
    }

    void print() 
    {
        cout << real << " + i" << imag << endl; 
    }
};

int main()
{
    Point c1(10, 5), c2(2, 4);
    Point c3=c1+c2;
    c3.print();
}

/*
O/P:
12 + i9
*/