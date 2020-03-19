/*
Four steps to reading a file:

1.#include <fstream>
2.Create a std::ifstream object using the path to your file.
3.Evaluate the std::ifstream object as a bool to ensure that the stream
    creation did not fail.
4.Use a while loop with getline to write file lines to a string.
*/
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void openfile(void)
{
//initial a fstream object
//fstream my_file;
//my_file.open(path)
//or initial in one line
//ifstream my_file(path);
fstream my_file;
my_file.open("File/file.txt");
//this instance my_file can use as boolean to check is the file exist or not
if(my_file)
cout<<"File is opened"<<endl;
else
cout<<"File does not exist"<<endl;
}

void readfile(void)
{
fstream my_file("File/file.txt");
string line;
while(getline(my_file,line))
{
    cout<<line<<endl;
}
}

int main()
{
openfile();
readfile();
}
/*
Output:
File is opened
Hello Gyanesh!!! Welcome to Udacity
*/