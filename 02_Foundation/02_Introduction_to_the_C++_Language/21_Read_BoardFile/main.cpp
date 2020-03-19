/*
->Write a function void ReadBoardFile which reads lines from a file.
->Write each line to cout, followed by a newline character "\n".
->The function should accept a string argument, which represents the path to the file.
->For now, since ReadBoardFile does not need to return anything, you can use a void return type.
->Call ReadBoardFile from main using the argument "1.board".
Note: you will need to include the fstream class, and you may want to have using 
std::ifstream to use the ifstream object without having to write std:: in the rest of your code.
*/
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void ReadBoardFile()
{
    fstream my_file;
    string line;
    my_file.open("File/1.board");
    if(my_file)
    cout<<"File exists and is opened"<<endl;
    else
    cout<<"File does not exist"<<endl;
    while(getline(my_file,line))
    {
        cout<<line<<endl;
    }

}

int main()
{
    ReadBoardFile();
}
/*
Output:
File exists and is opened
0,1,0,0,0,0,
0,1,0,0,0,0,
0,1,0,0,0,0,
0,1,0,0,0,0,
0,0,0,0,1,0,
*/