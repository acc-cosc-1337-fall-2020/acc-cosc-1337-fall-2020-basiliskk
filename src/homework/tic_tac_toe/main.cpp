#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
using std::cout; using std::cin;
using std::endl; 
int main() 
{
  TicTacToeManager manager;
  std::string player;
  char choice;

  do 
  {
    TicTacToe game;
    while(player != "X"  && player != "O" ) {
      cout<<"Enter X or O: ";
      cin>>player;
    }
    game.start_game(player);

    do {
     cin>>game;
     cout<<game;


    } while (game.game_over() == false);

    player = "";
    //reset the player variable bc get_winner won't be accurate otherwise
    cout<<"Game over, the winner is: "<<game.get_winner()<<std::endl;
    
    manager.save_game(game);

    int x, o, t;
    manager.get_winner_totals(x, o,t);

    cout<<"X wins: "<<x<<endl;
    cout<<"O wins: "<<o<<endl;
    cout<<"Ties: "<<t<<endl;
    cout<<"To continue please enter Y or y: ";
    cin>>choice;


  } while (choice == 'Y' || choice == 'y');
 cout<<manager;

	return 0;
}
