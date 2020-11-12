#include <string>
#include <vector>
#include <iostream>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe 
{
public:
  bool game_over();
  void start_game(std::string first_player);
  void mark_board(int position);
  std::string get_player() const;
  void display_board() const;

private:
  void set_next_player();
  bool check_board_full();
  void clear_board();
  std::string player;
  std::vector<std::string> pegs{9, " "};

};

#endif