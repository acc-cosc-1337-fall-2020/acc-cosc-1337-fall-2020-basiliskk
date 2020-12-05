
#include "tic_tac_toe_data.h"
 void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games) {
   std::ofstream file_out;
   file_out.open(file_name);

   for(auto& game: games) {
     for(auto string : game->get_pegs()) {
       file_out<<string;
     }
     file_out<<game->get_winner();
     file_out<<"\n";
   }
   file_out.close();
 }
 std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()  {
   std::vector<std::unique_ptr<TicTacToe>> boards;
   std::ifstream in_file(file_name);
   std::string line;

   
     while(std::getline(in_file, line)) {
       std::vector<string> pegs;
       for(int i = 0; i < line.length() - 1; i++) {
         string current(1, line[i]);
         pegs.push_back(current);
       }
      string thisWinner(1,line[line.length()- 1]); 
      std::unique_ptr<TicTacToe> board;

      if(pegs.size() == 9) {
        board = std::make_unique<TicTacToe3>(pegs, thisWinner);
      }
      else if(pegs.size() == 16) {
        board = std::make_unique<TicTacToe4>(pegs, thisWinner);
      }

      boards.push_back(std::move(board));
      

      }
      in_file.close();
      return boards;

}


 