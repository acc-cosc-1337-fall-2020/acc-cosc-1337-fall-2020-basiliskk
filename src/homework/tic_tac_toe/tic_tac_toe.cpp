#include "tic_tac_toe.h"
#include <iostream> 

bool TicTacToe:: check_board_full()  {
  
  for (auto peg: pegs) 
  {
    if(peg ==" ") {
      return false;
    }
  }
  return true;
}

 bool TicTacToe::game_over() {
   return check_board_full();
 }
  void TicTacToe::start_game(std::string first_player){
    if (first_player == "X" || first_player == " O") {
      player = first_player;
    }
    clear_board();
  }
  void TicTacToe::mark_board(int position) {
    pegs[position -1 ] = player;
    set_next_player();
  }
 
  void TicTacToe::display_board() const {
    for (int i =0; i < 9; i+= 3) {
      std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<std::endl;
    }
  }

  std::string TicTacToe::get_player() const {
    return player;
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