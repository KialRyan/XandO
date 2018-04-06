//Author:
#include <iostream>

using namespace std;

//GLOBAL CONSTANTS
const int ROWS = 3;
const int COLUMNS = 3;
const char BLANK = ' ';
const char X = 'X';
const char O = 'O';
const int QUIT = -1;
char winner = ' ';
int main()
{
  //3x3 matrix of characters, initially with blank spaces in each position
  char board[ROWS][COLUMNS] = {{BLANK, BLANK, BLANK},
                               {BLANK, BLANK, BLANK},
                               {BLANK, BLANK, BLANK}};

  char turn = X; //Player X always goes first
  int row;
  int column;
  bool playing = true; //Continue playing by default

  do
  {
    cout<<turn<<"'s turn.\n";
    cout<<"Which column and row (0-2, or -1 for both to quit)?\n";
    cin>>column;
    cin>>row;

    //Make sure the user isn't quitting
    if(column == QUIT && row == QUIT)
    {
      playing = false;
    }
    //Print error if the column and/or row is out of bounds of 0-2
    else if( column < 0 || row < 0 || column > 2 || row > 2 )
    {
      cout<<"Values must be between 0 and 2.\n";
    }
    else
    {
    board[row][column]= turn;
        if(turn==X)
        {
            turn=O;
        }
        else if(turn==O)
        {
            turn=X;
        }
    }

    //TODO: Place the piece and swap turns
    //Outline
    //1. When neither of the (above) if nor else if statements are true, then...
    //1-A.  Assign the board location of row and column to the value of turn
    //1-B.  When turn has the value 'X', then...
    //1-B-1.  turn should be assigned the value 'O'
    //1-C.  In any other case, then...
    //1-C-1.  turn should be assigned the value 'X'
    
    cout<<"\nBOARD\n-----\n";
    cout<<board[0][0]<<" "<<board[0][1]<<" "<<board[0][2]<<" "<<endl;
    cout<<board[1][0]<<" "<<board[1][1]<<" "<<board[1][2]<<" "<<endl;
    cout<<board[2][0]<<" "<<board[2][1]<<" "<<board[2][2]<<" "<<endl;
    
    if((board[0][0]=='X')&&(board[0][1]=='X')&&(board[0][2]=='X'))
    {
        winner= 'X';
        playing= false;
    }
    else if((board[1][0]=='X')&&(board[1][1]=='X')&&(board[1][2]=='X'))
    {
        winner= 'X';
        playing = false;
    }
    else if((board[2][0]=='X')&&(board[2][1]=='X')&&(board[2][2]=='X'))
    {
        winner = 'X';
        playing = false;
    }
    else if ((board[0][0]=='X')&&(board[1][0]=='X')&&(board[2][0]=='X'))
    {
        winner= 'X';
        playing = false;
    }
    else if ((board[0][1]=='X')&&(board[1][1]=='X')&&(board[2][1]=='X'))
    {
        winner = 'X';
        playing = false;
    }
    else if ((board[0][2]=='X')&&(board[1][2]=='X')&&(board[2][2]=='X'))
    {
        winner = 'X';
        playing = false;
    }
    else if ((board[0][0]=='X')&&(board[1][1]=='X')&&(board[2][2]=='X'))
    {   
        winner = 'X';
        playing = false;
    }
    else if ((board[0][2]=='X')&&(board[1][1]=='X')&&(board[2][2]=='X'))
    {
        winner = 'X';
        playing = false;
    }
    
    if((board[0][0]=='O')&&(board[0][1]=='O')&&(board[0][2]=='O'))
    {
        winner = 'O';
        playing = false;
    }
    else if ((board[1][0]=='O')&&(board[1][1]=='O')&&(board[1][2]=='O'))
    {
        winner = 'O';
        playing = false;
    }
    else if ((board[2][0]=='O')&&(board[2][1]=='O')&&(board[2][2]=='O'))
    {
        winner = 'O';
        playing = false;
    }
    else if ((board[0][0]=='O')&&(board[1][0]=='O')&&(board[2][0]=='O'))
    {
        winner = 'O';
        playing = false;
    }
    else if ((board[0][1]=='O')&&(board[1][1]=='O')&&(board[2][1]=='O'))
    {
        winner = 'O';
        playing = false;
    }
    else if ((board[0][2]=='O')&&(board[1][2]=='O')&&(board[2][2]=='O'))
    {
        winner = 'O';
        playing = false;
    }
    else if ((board[0][0]=='O')&&(board[1][1]=='O')&&(board[2][2]=='O'))
    {
        winner = 'O';
        playing = false;
    }
    else if ((board[0][2]=='O')&&(board[1][1]=='O')&&(board[2][2]=='O'))
    {
        winner = 'O';
        playing = false;
    }
    
    if(winner != ' ')
    {
    cout<<"Winner is "<<winner<<endl;
    }
  
  }
  while( playing );

  cout<<"Goodbye!\n";
  
  return 0;
}
