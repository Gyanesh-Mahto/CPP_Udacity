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
/*
Follow the TODO comments in the main file below, and update the program to store a board of 
State variables. When you are done, the board should print as in the image above. Note that you 
will need to call CellString on each object in the board before printing: CellString(board[i][j]).
*/
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

enum class State {kEmpty, kObstacle};

// TODO: Change the return type to use auto or
// explicitly indicate vector<State>
vector<State> ParseLine_row(string line)
{
    istringstream my_stream(line);
    // TODO: Change the variable type for row
    // to be a vector<State>
    vector<State>v_row;
    State curstate;
    int n;
    char c;
    while(my_stream>>n>>c && c==',')
    {
     // TODO: Modify the line below to push_back
      // a State::kEmpty if n is 0, and push_back
      // a State::kObstacle otherwise.
      if(n==0)
      {
          curstate=State::kEmpty;
      }
      else if(n==1)
      {
          curstate=State::kObstacle;
      }
    v_row.push_back(curstate);
    }
    return v_row;
}

// TODO: Modify the return type here as well. Just
// as above, the board will contain State objects
// instead of ints.
vector<vector<State>> ReadBoardFile(string path)
{
    // TODO: Modify the board declarationto store
  // State objects instead of ints.
    vector<vector<State>> board;
    fstream my_stream;
    if(my_stream)   
    {
    string line;
    my_stream.open("1.board");
    while(getline(my_stream,line))
    {
        // TODO: Modify the row type to use State
      // objects instead of ints.
    vector<State> row=ParseLine_row(line);
    board.push_back(row);
    }
    }
    return board;
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

void PrintBoard(const vector<vector<State>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
        // TODO: Modify the line below to call CellString
      // on each element of the board before streaming to cout.
      cout << CellString(board[i][j]);
    }
    cout << "\n";
  }
}



int main()
{
   auto board=ReadBoardFile("1.board");
    PrintBoard(board);
}

/*
Output:
0   ⛰️   0   0   0   0   
0   ⛰️   0   0   0   0   
0   ⛰️   0   0   0   0   
0   ⛰️   0   0   0   0   
0   0   0   0   ⛰️   0 
*/