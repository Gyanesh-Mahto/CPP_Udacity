/*
Write a vector<int> ParseLine function which accepts a string as an argument.
Use std::istringstream to parse the line by comma chars, and store the ints in a vector<int>.
ParseLine should return the vector after parsing.

Note: you will need to #include <sstream> to use istringstream. Additionally, 
you may want to add using std::istringstream; to your program. 
Finally, remember that each line of the board will look something like: 1,0,0,0,0,, 
so you may want to stream an int and a char with each pass through a while loop.
*/
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;


// TODO: Add the ParseLine function here.
vector<int> ParseLine(string line)
{
    istringstream my_stream(line);
    vector<int>v;
    int n;
    char c;
    while(my_stream>>n>>c)
    v.push_back(n);
    return v;
}

#include "test.cpp" // For testing.

void ReadBoardFile(string path)
{
    fstream my_stream;
    string line;
    my_stream.open("1.board");
    while(getline(my_stream,line))
    cout<<line<<endl;
}

int main()
{
    //ReadBoardFile("1.board");
    TestParseLine();
}
/*
Output:
----------------------------------------------------------
TestParseLine: passed

Test input string: 0,1,0,0,0,0,
Your parsed line vector: { 0 1 0 0 0 0 }
----------------------------------------------------------
*/