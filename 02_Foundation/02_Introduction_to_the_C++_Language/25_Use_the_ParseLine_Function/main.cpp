/*
Update ReadBoardFile to use ParseLine and return the board as a vector<vector<int>>. 
You can read the TODO comments in the code for step by step instructions.
Update the main function to pass the results of ReadBoardFile to the PrintBoard function.
*/
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;


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

// TODO: Change the return type of ReadBoardFile.
vector<vector<int>> ReadBoardFile(string path)
{
    // TODO: Declare an empty board variable here with
    vector<vector<int>> board;
  // type vector<vector<int>>.
    fstream my_stream;
    if(my_stream)
    {
    string line;
    my_stream.open("1.board");
    while(getline(my_stream,line))
    {
        // TODO: Replace the "cout" code with a call to ParseLine for each line and push the results of ParseLine to the back of the board.
    board.push_back(ParseLine_row(line));
    }
    }
    // TODO: Return the board variable.
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

int main()
{
    // TODO: Store the output of ReadBoardFile in the "board" variable.
    vector<vector<int>> board;
   board=ReadBoardFile("1.board");
    // TODO: Uncomment PrintBoard below to print "board".
    PrintBoard(board);
}