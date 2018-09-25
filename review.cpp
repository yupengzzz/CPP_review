/*
  This .cpp file is a review of structures and algorithm implementation.
Questions come from textbook. Each time a question is done, this file's
content will be cleared and filled up for solutions for new questions.
*/

// The rock, paper, scissors game

#include<iostream>

using namespace std;

int main()
{
  char c1 = '0';
  char c2 = '0';
  char ans = '0';
  
  cout << "This program stimulates a rock, paper, scissors game. Each" << endl
       << "player types R for rock, P for paper, or S for scissors," << endl
       << "and the winner will be determined." << endl;
       
  do
  {
    cout << "Player 1: ";
    cin >> c1;
    cin.ignore(100, '\n');
    cout << "Player 2: ";
    cin >> c2;
    cin.ignore(100, '\n');
    
    if(((c1 == 'R' || c1 == 'r') && (c2 == 'R' || c2 == 'r'))
       || ((c1 == 'P' || c1 == 'p') && (c2 == 'P' || c2 == 'p'))
       || ((c1 == 'S' || c1 == 's') && (c2 == 'S' || c2 == 's')))
    {
      cout << "Draw. Let's play another round." << endl;
      continue;
    }
    elseif((c1 == 'R' || c1 == 'r') && (c2 == 'P' || c2 == 'p'))
    {
      cout << "Paper wraps rock, player 2 wins!!" << endl;
    }
    elseif((c1 == 'R' || c1 == 'r') && (c2 == 'S' || c2 == 's'))
    {
      cout << "Rock smashes scissor, player 1 wins!!" << endl;
    }
    elseif((c1 == 'P' || c1 == 'p') && (c2 == 'R' || c2 == 'r'))
    {
      cout << "Paper wraps rock, player 1 wins!!" << endl;
    }
    elseif((c1 == 'P' || c1 == 'p') && (c2 == 'S' || c2 == 's'))
    {
      cout << "Scissors cut paper, player 2 wins!!" << endl;
    }
    elseif((c1 == 'S' || c1 == 's') && (c2 == 'R' || c2 == 'r'))
    {
      cout << "Rock smashes scissor, player 2 wins!!" << endl;
    }
    elseif((c1 == 'S' || c1 == 's') && (c2 == 'P' || c2 == 'p'))
    {
      cout << "Scissors cut paper, player 1 wins!!" << endl;
    }
    else
    {
      cout << "Unrecognized entry, please try again." << endl;
      continue;
    }
    
    cout << "Would you like another round?" << endl
         << "Type Y for yes, else exit." << endl;
    cin >> ans;
    cin.ignore(100,'\n');
  } while(ans == 'Y' || ans == 'y');
  
  return 0;
}
