#include "tic_tac_toe.h"
using std::cout; using std::cin;
using std::endl; 
int main() 
{
  TicTacToe a;
  std::string player;
 cout<<"Enter X or O: ";
  cin>>player;

  a.start_game(player);

  do 
  {
    int position;
    cout<<" Enter positions from 1 to 9: ";
    cin>>position;
    a.mark_board(position);
    a.display_board();

  } while (a.game_over() == false);
 

	return 0;
}