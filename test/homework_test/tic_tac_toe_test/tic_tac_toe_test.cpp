#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify get_player function") {
  TicTacToe game1, game2;
  game1.start_game("X");
  game2.start_game("O");

  REQUIRE(game1.get_player() == "X");
  REQUIRE(game2.get_player() == "O");
}



TEST_CASE("Testing Tic Tac Toe Game") {
  TicTacToe a;
  a.start_game("X");

  a.mark_board(1);
  REQUIRE(a.game_over() == false);
  a.mark_board(2);
  REQUIRE(a.game_over() == false);
  a.mark_board(3);
  REQUIRE(a.game_over() == false);
  a.mark_board(4);
  REQUIRE(a.game_over() == false);
  a.mark_board(5);
  REQUIRE(a.game_over() == false);
  a.mark_board(7);
  REQUIRE(a.game_over() == false);
  a.mark_board(6);
  REQUIRE(a.game_over() == false);
  a.mark_board(9);
  REQUIRE(a.game_over() == false);
  a.mark_board(8); 
  REQUIRE(a.game_over() == true);
  
}

TEST_CASE("Testing Tic Tac Toe Game if tie is possible") {
  TicTacToe a;
  a.start_game("X");

  a.mark_board(1);
  a.mark_board(3);
  a.mark_board(2);
  a.mark_board(4);
  a.mark_board(6);
  a.mark_board(5);
  a.mark_board(7);
  a.mark_board(8);
  a.mark_board(9);
  REQUIRE(a.game_over() ==true);
  REQUIRE(a.get_winner() == "C");
   
}

TEST_CASE("Test win by first column - X wins")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == false);
	board.mark_board(7);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second column")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);       
	REQUIRE(board.game_over() == false);
	board.mark_board(4);          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);         
	REQUIRE(board.game_over() == false);
	board.mark_board(8);
	 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third column")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);        
	REQUIRE(board.game_over() == false);
	board.mark_board(5);          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by first row")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);         
	REQUIRE(board.game_over() == false);
	board.mark_board(9);          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);          
	REQUIRE(board.game_over() == false);
	board.mark_board(3); 
	
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second row")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);         
	REQUIRE(board.game_over() == false);
	board.mark_board(8);          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);          
	REQUIRE(board.game_over() == false);
	board.mark_board(6); 
	
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third row")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);          
	REQUIRE(board.game_over() == false);
	board.mark_board(9); 
	
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win diagonal 1")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);          
	REQUIRE(board.game_over() == false);
	board.mark_board(9); 
	
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win diagonal 2")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);          
	REQUIRE(board.game_over() == false);
	board.mark_board(1);          
	REQUIRE(board.game_over() == false);
	board.mark_board(7); 
	
	REQUIRE(board.game_over() == true);
} 



