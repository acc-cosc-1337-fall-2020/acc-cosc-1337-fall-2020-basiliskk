#include "tic_tac_toe.h"

bool TicTacToe:: check_board_full()  {
  
  for (auto peg: pegs) 
  {
    if(peg ==" ") {
      return false;
    }
  }
  return true;
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player; 
    clear_board();
}

 bool TicTacToe::game_over() {
   if (check_diagonal_win() || check_row_win() || check_column_win()) {
     set_winner();
     return true;
   }
   else if (check_board_full()) {
     winner = "C";
     return true;
   }
   return false;
  }
  
  void TicTacToe::mark_board(int position) {
    pegs[position -1 ] = player;
    set_next_player();
  }



  void TicTacToe::set_next_player() {
    if(player == "X") {
      player = "O";
    }
    else {
      player = "X";
    }

  }

  void TicTacToe::clear_board() {
    for (int i = 0; i < 9; i++) {
      pegs[i] = " ";
    }

  }

  void TicTacToe::set_winner() {
    if(player == "X") {
      winner = "O";
    }
    else if (player == "O") {
      winner = "X";
    }
  }

bool TicTacToe::check_column_win()
{
    for (int i = 0; i < 3; i++) 
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6]
			&& pegs[i + 6] != " ")
		{
			return true;
		}
	}

	return false;
}

  bool TicTacToe::check_row_win()
{
    for (int i = 0; i < 9; i += 3) 
	{
		if(pegs[i] == pegs[i+1] && pegs [i+1] == pegs[i+2] && pegs[i] != " ")
		{
			return true;
		}
	}

	return false;
}

 bool TicTacToe::check_diagonal_win()
{
    if(pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " ")
    {
      return true;
    }
    else if(pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " ")
    {
		  return true;
	  }

	return false;
}


std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
  out<<"winner: "<<game.get_winner()<<std::endl;

  for(int i = 0; i < game.pegs.size(); i += 3) 
  {
    out<<game.pegs[i]<<"|"<<game.pegs[i+1]<<"|"<<game.pegs[i+2]<<"\n";
  }
  out<<"\n";
  return out;
}
//overloading the output operator in order to display the number of winners and the current state of the game

std::istream& operator>>(std::istream& in, TicTacToe& game) {
  int p;
  std::cout<<"Please enter a position from 1 to 9: ";
  in>>p;

  //exact same input verification as HW_6, 
  while(!in.good() && (p <1 || p >9)) {
    in.clear();

    std::cout<<"Please enter a position from 1 to 9: ";
    in>>p;
  }

  game.mark_board(p);

  return in;
}