#include <string>
#include <vector>
#include <iostream>
#include <math.h>
using std::string;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe 
{
public:
  TicTacToe(unsigned int size) :pegs{size*size, " "}{}
  TicTacToe(std::vector<string> p, string win) : pegs(p), winner(win) {}
  bool game_over();
  void start_game(std::string first_player);
  void mark_board(int position);
  void display_board() const;
  std::vector<string> get_pegs() const{ return pegs;}
  std::string get_player() const {return player;}
  std::string get_winner() const {return winner;}
  friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
  friend std::istream& operator>>(std::istream& in, TicTacToe& game);
  
protected:
  virtual bool check_column_win();
  virtual bool check_row_win();
  virtual bool check_diagonal_win();
  std::vector<std::string> pegs;
  int dimensionality = sqrt(pegs.size());

private: 
  void set_winner();
  void set_next_player();
  bool check_board_full()const;
  void clear_board();

  std::string winner;
  std::string player;
  

};

#endif