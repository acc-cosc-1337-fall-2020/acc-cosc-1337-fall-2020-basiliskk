#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_3.h"
#include<memory>
using std::cout; using std::cin;
using std::endl; 
int main() 
{
  TicTacToeManager manager;
  std::unique_ptr<TicTacToe> game;
  std::string player;
  int dimension;
  char choice;

  do 
  {
    cout<<"Enter 3 or 4: ";
    cin>>dimension;

    while(!cin.good() && (dimension != 3 || dimension != 4)) {
      cin.clear();
      
      cout<<"Enter 3 or 4: ";
      cin>>dimension;
    }

    if(dimension == 3) {
       game = std::make_unique<TicTacToe3>();
    }
    else {
      game = std::make_unique<TicTacToe4>();
    }


    while(player != "X"  && player != "O" ) {
      cout<<"Enter X or O: ";
      cin>>player;
    }
    game->start_game(player);

    do {
     cin>>*game;
     cout<<*game;


    } while (game->game_over() == false);

    player = "";
    //reset the player variable bc get_winner won't be accurate otherwise
    cout<<"Game over, the winner is: "<<game->get_winner()<<std::endl;
    
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
