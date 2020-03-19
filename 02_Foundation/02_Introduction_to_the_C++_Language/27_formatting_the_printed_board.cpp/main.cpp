/*
Write a function CellString which accepts aState as input and returns the following string:
"⛰️ " if the input equals a kObstacle
"0 " otherwise.
*/
/*
Formatting the Printed Board
0   ⛰️   0   0   0   0
0   ⛰️   0   0   0   0
0   ⛰️   0   0   0   0
0   ⛰️   0   0   0   0
0   0    0   0  ⛰️   0

The board will eventually have more than two cell states as the program becomes more complicated,
and it would be nice to add formatting to the printed output of the board to ensure readability as the number of board states increases.

To accommodate more board states and facilitate print formatting, we have provided the State enum
with enumerator values kEmpty and kObstacle. In this exercise,
you will write a CellString function which converts each State to an appropriate string.
In the next exercise, we will update the program to use the enum values and CellString function.
*/
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

enum class State {kEmpty, kObstacle};

vector<int> ParseLine_row(string line)
{
    istringstream my_stream(line);
    vector<int>v_row;
    int n;
    char c;
    while(my_stream>>n>>c && c==',')
    v_row.push_back(n);
    return v_row;
}

vector<vector<int>> ReadBoardFile(string path)
{
    vector<vector<int>> board;
    fstream my_stream;
    if(my_stream)
    {
    string line;
    my_stream.open("1.board");
    while(getline(my_stream,line))
    {
    board.push_back(ParseLine_row(line));
    }
    }
    return board;
}

void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

// TODO: Create the CellString function here,
// using the following return strings:
// "⛰️   "
// "0   "

string CellString(State cell)
{
    switch(cell)
    {
        case State::kEmpty:
        return "0   ";
        case State::kObstacle:
        return "⛰️   ";
    }
}


int main()
{
    vector<vector<int>> board;
   board=ReadBoardFile("1.board");
    PrintBoard(board);
}