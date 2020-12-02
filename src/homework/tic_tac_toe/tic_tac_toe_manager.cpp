#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game) {
  update_winner_count(game->get_winner());
  games.push_back(std::move(game));

}

void TicTacToeManager::get_winner_totals(int&x, int &o, int &t) {
  x = x_wins;
  o = o_wins;
  t = ties;

}

void TicTacToeManager::update_winner_count(std::string winner) {
  if(winner == "X") {
    x_wins++;
  }
  else if(winner == "O") {
    o_wins++;
  }
  else {
    ties++;
  }

}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager) {
  out<<"\n"<<"Game History"<<"\n";

  for(auto& game: manager.games) 
  {
    out<<*game;
  }

  return out;
}

