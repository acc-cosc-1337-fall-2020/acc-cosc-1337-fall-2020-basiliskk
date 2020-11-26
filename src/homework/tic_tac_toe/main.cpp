#include "tic_tac_toe.h"
using std::cout; using std::cin;
using std::endl; 
int main() 
{
  TicTacToe game;
  std::string player;
  char choice;

  do 
  {
    while(player != "X"  && player != "O" ) {
      cout<<"Enter X or O: ";
      cin>>player;
    }
    game.start_game(player);

    do {
      int position;
      cout<<"\n";
      cout<<"Please enter a position from 1 to 9: ";
      cin>>position;
      
      while (!cin.good() && (position < 1 || position > 9)) {
        cin.clear();
        cout<<"Please enter a position from 1 to 9: ";
        cin>>position;

      }
      game.mark_board(position);
      game.display_board();


    } while (game.game_over() == false);

    player = "";
    //reset the player variable bc get_winner won't be accurate otherwise
    cout<<"Game over, the winner is: "<<game.get_winner()<<std::endl;
    
    cout<<"To continue please enter Y or y: ";
    cin>>choice;


  } while (choice == 'Y' || choice == 'y');
 

	return 0;
}
