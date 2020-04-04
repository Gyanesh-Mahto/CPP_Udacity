/*
Encapsulation is the grouping together of data and logic into a single unit. In object-oriented programming, classes encapsulate data and functions that 
operate on that data.

This can be a delicate balance, because on the one hand we want to group together relevant data and functions, but on the other hand we want to limit 
member functions to only those functions that need direct access to the representation of a class.

In the context of a Date class, a function Date Tomorrow(Date const & date) probably does not need to be encapsulated as a class member. It can exist 
outside the Date class.

However, a function that calculates the number of days in a month probably should be encapsulated with the class, because the class needs this function 
in order to operate correctly.
*/
/*
Debugging Exercise

Debugging in C++ can be tedious, but learning how to read the error messages and figure out what went
wrong is a super important skill to develop!

In the code below, we've introduced a few small errors.
Press the Compile & Run button to see what errors occur.
Then see if you can clean them up! Scroll down to see a solution if you get stuck.
*/

// Encapsulation
// #include <iostream>  

// class Encapsulation {
//   private
//     int x;  // data encapsulated (hidden) within the class
    
//   public
//     void Set(int a)  // interface to set the value of variable x
//     {
//       x = a
//     }

//     int Get() // interface to get the value of variable x
//     {
//       return x;
    
// };

// int main()
// {
//   Encapsulation obj;
//   obj.Set(5);
//   std::cout << obj.Get() << "\n";
// }

//Encapsulation
#include <iostream>  

class Encapsulation {
private:    //<--Error 1
int x;  // data encapsulated (hidden) within the class
    
public: //<--Error 2
void Set(int a)  // interface to set the value of variable x
{
   x = a;   //<--Error 3
}

int Get() // interface to get the value of variable x
{
    return x;
}   //<--Error 4
};

int main()
{
   Encapsulation obj;
   obj.Set(5);
   std::cout << obj.Get() << "\n";
}