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
    
    if((c1 == 'R' || c1 == 'r') && (c2 == 'R' || c2 == 'r'))
    {
      cout << "Draw. Let's play another round." << endl;
      continue;
    }
    
    cout << "Would you like another round?" << endl
         << "Type Y for yes, else exit." << endl;
  } while(ans == 'Y' || ans == 'y');
  
  return 0;
}
