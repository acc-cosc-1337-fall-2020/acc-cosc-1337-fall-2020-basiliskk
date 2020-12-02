#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <memory>
#include<utility>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
using std::unique_ptr; 
using std::make_unique;


TEST_CASE("Verify test configuration", "verification") {
  REQUIRE(true == true);
}




TEST_CASE("Verify get_player function") {
  unique_ptr<TicTacToe3> game1 = make_unique<TicTacToe3>();
  unique_ptr<TicTacToe3> game2 = make_unique<TicTacToe3>();
  game1->start_game("X");
  game2->start_game("O");

  REQUIRE(game1->get_player() == "X");
  REQUIRE(game2->get_player() == "O");
}



TEST_CASE("Testing Tic Tac Toe Game") {
  unique_ptr<TicTacToe3> a = make_unique<TicTacToe3>();
  a->start_game("X");

  a->mark_board(1);
  REQUIRE(a->game_over() == false);
  a->mark_board(2);
  REQUIRE(a->game_over() == false);
  a->mark_board(3);
  REQUIRE(a->game_over() == false);
  a->mark_board(4);
  REQUIRE(a->game_over() == false);
  a->mark_board(5);
  REQUIRE(a->game_over() == false);
  a->mark_board(7);
  REQUIRE(a->game_over() == false);
  a->mark_board(6);
  REQUIRE(a->game_over() == false);
  a->mark_board(9);
  REQUIRE(a->game_over() == false);
  a->mark_board(8); 
  REQUIRE(a->game_over() == true);
  
}

TEST_CASE("Testing Tic Tac Toe Game if tie is possible", "3") {
  unique_ptr<TicTacToe3> a = make_unique<TicTacToe3>();
  a->start_game("X");

  a->mark_board(1);
  a->mark_board(3);
  a->mark_board(2);
  a->mark_board(4);
  a->mark_board(6);
  a->mark_board(5);
  a->mark_board(7);
  a->mark_board(8);
  a->mark_board(9);
  REQUIRE(a->game_over() ==true);
  REQUIRE(a->get_winner() == "C");
   
}

TEST_CASE("Test win by first column", "3")
{
	unique_ptr<TicTacToe3> a = make_unique<TicTacToe3>();
  a->start_game("X");
	REQUIRE(a->game_over() == false);
	a->mark_board(1);
	REQUIRE(a->game_over() == false);
	a->mark_board(5);
	REQUIRE(a->game_over() == false);
	a->mark_board(4);
	REQUIRE(a->game_over() == false);
	a->mark_board(9);
	REQUIRE(a->game_over() == false);
	a->mark_board(7);
	REQUIRE(a->game_over() == true);
  REQUIRE(a->get_winner() ==  "X");
}

TEST_CASE("Test win by second column", "3")
{
	unique_ptr<TicTacToe3> a = make_unique<TicTacToe3>();
  a->start_game("X");
	REQUIRE(a->game_over() == false);
	a->mark_board(2);       
	REQUIRE(a->game_over() == false);
	a->mark_board(4);          
	REQUIRE(a->game_over() == false);
	a->mark_board(5);         
	REQUIRE(a->game_over() == false);
	a->mark_board(1);         
	REQUIRE(a->game_over() == false);
	a->mark_board(8);
	 
	REQUIRE(a->game_over() == true);
  REQUIRE(a->get_winner() ==  "X");
}

TEST_CASE("Test win by third column", "3")
{
	unique_ptr<TicTacToe3> board = make_unique<TicTacToe3>();
  board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);        
	REQUIRE(board->game_over() == false);
	board->mark_board(5);          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);

	REQUIRE(board->game_over() == true);
  REQUIRE(board->get_winner() ==  "X");
}

TEST_CASE("Test win by first row","3")
{
	unique_ptr<TicTacToe3> board = make_unique<TicTacToe3>();
  board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);         
	REQUIRE(board->game_over() == false);
	board->mark_board(9);          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);          
	REQUIRE(board->game_over() == false);
	board->mark_board(3); 
	
	REQUIRE(board->game_over() == true);
  REQUIRE(board->get_winner() ==  "X");
}

TEST_CASE("Test win by second row","3")
{
	unique_ptr<TicTacToe3> board = make_unique<TicTacToe3>();
  board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4);         
	REQUIRE(board->game_over() == false);
	board->mark_board(8);          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);          
	REQUIRE(board->game_over() == false);
	board->mark_board(6); 
	
	REQUIRE(board->game_over() == true);
  REQUIRE(board->get_winner() ==  "X");
}

TEST_CASE("Test win by third row","3")
{
	unique_ptr<TicTacToe3> board = make_unique<TicTacToe3>();
  board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(7);         
	REQUIRE(board->game_over() == false);
	board->mark_board(1);          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);          
	REQUIRE(board->game_over() == false);
	board->mark_board(9); 
	
	REQUIRE(board->game_over() == true);
  REQUIRE(board->get_winner() ==  "X");
}

TEST_CASE("Test win diagonal 1","3")
{
	unique_ptr<TicTacToe3> board = make_unique<TicTacToe3>();
  board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);          
	REQUIRE(board->game_over() == false);
	board->mark_board(9); 
	
	REQUIRE(board->game_over() == true);
  REQUIRE(board->get_winner() ==  "X");
}

TEST_CASE("Test win diagonal 2", "3")
{
	unique_ptr<TicTacToe3> board = make_unique<TicTacToe3>();
  board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);          
	REQUIRE(board->game_over() == false);
	board->mark_board(1);          
	REQUIRE(board->game_over() == false);
	board->mark_board(7); 
	
	REQUIRE(board->game_over() == true);
  REQUIRE(board->get_winner() ==  "X");
} 

TEST_CASE("Test win by first column (4)")
{ 
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	board->mark_board(1);        
	REQUIRE(board->game_over() == false);
	board->mark_board(3);          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);         
	REQUIRE(board->game_over() == false);
	board->mark_board(7);          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);
	REQUIRE(board->game_over() == false);
	board->mark_board(6);
	REQUIRE(board->game_over() == false);
	board->mark_board(13);

	REQUIRE(board->game_over() == true);
  REQUIRE(board->get_winner() ==  "X");
}



TEST_CASE("Test win by second column (4)")
{ 
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	board->mark_board(2);         
	REQUIRE(board->game_over() == false);
	board->mark_board(7);         
	REQUIRE(board->game_over() == false);
	board->mark_board(10);        
	REQUIRE(board->game_over() == false);
	board->mark_board(5);          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);
	REQUIRE(board->game_over() == false);
	board->mark_board(9);
	REQUIRE(board->game_over() == false);
	board->mark_board(14);

	REQUIRE(board->game_over() == true);
  REQUIRE(board->get_winner() ==  "X");
}

TEST_CASE("Test win by third column (4)")
{ 
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	board->mark_board(3);       
	REQUIRE(board->game_over() == false);
	board->mark_board(5);       
	REQUIRE(board->game_over() == false);
	board->mark_board(11);        
	REQUIRE(board->game_over() == false);
	board->mark_board(6);        
	REQUIRE(board->game_over() == false);
	board->mark_board(7);
	REQUIRE(board->game_over() == false);
	board->mark_board(12);
	REQUIRE(board->game_over() == false);
	board->mark_board(15);
	
	REQUIRE(board->game_over() == true);
  REQUIRE(board->get_winner() ==  "X");
}

TEST_CASE("Test win by fourth column (4)")
{ 
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	board->mark_board(8);       
	REQUIRE(board->game_over() == false);
	board->mark_board(3);          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);          
	REQUIRE(board->game_over() == false);
	board->mark_board(16);
	REQUIRE(board->game_over() == false);
	board->mark_board(10);
	REQUIRE(board->game_over() == false);
	board->mark_board(12);

	REQUIRE(board->game_over() == true);
  REQUIRE(board->get_winner() ==  "X");
}

TEST_CASE("Test win by first row (4)")
{ 
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	board->mark_board(1);        
	REQUIRE(board->game_over() == false);
	board->mark_board(5);         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);         
	REQUIRE(board->game_over() == false);
	board->mark_board(8);         
	REQUIRE(board->game_over() == false);
	board->mark_board(3);
	REQUIRE(board->game_over() == false);
	board->mark_board(9);         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);
	
	REQUIRE(board->game_over() == true);
  REQUIRE(board->get_winner() ==  "X");
}

TEST_CASE("Test win by second row (4)")
{ 
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	board->mark_board(5);        
	REQUIRE(board->game_over() == false);
	board->mark_board(3);         
	REQUIRE(board->game_over() == false);
	board->mark_board(6);         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);         
	REQUIRE(board->game_over() == false);
	board->mark_board(7);
	REQUIRE(board->game_over() == false);
	board->mark_board(4);         
	REQUIRE(board->game_over() == false);
	board->mark_board(8);
	
	REQUIRE(board->game_over() == true);
  REQUIRE(board->get_winner() ==  "X");
}

TEST_CASE("Test win by third row (4)")
{ 
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	board->mark_board(9);        
	REQUIRE(board->game_over() == false);
	board->mark_board(1);         
	REQUIRE(board->game_over() == false);
	board->mark_board(10);         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);         
	REQUIRE(board->game_over() == false);
	board->mark_board(11);
	REQUIRE(board->game_over() == false);
	board->mark_board(3);         
	REQUIRE(board->game_over() == false);
	board->mark_board(12);
	 
	REQUIRE(board->game_over() == true);
  REQUIRE(board->get_winner() ==  "X");
}

TEST_CASE("Test win by fourth row (4)")
{ 
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	board->mark_board(13);        
	REQUIRE(board->game_over() == false);
	board->mark_board(1);         
	REQUIRE(board->game_over() == false);
	board->mark_board(14);         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);         
	REQUIRE(board->game_over() == false);
	board->mark_board(15);
	REQUIRE(board->game_over() == false);
	board->mark_board(3);         
	REQUIRE(board->game_over() == false);
	board->mark_board(16);
	
	REQUIRE(board->game_over() == true);
  REQUIRE(board->get_winner() ==  "X");
}

TEST_CASE("Test win diagonally from top left (4)")
{ 
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	board->mark_board(1);        
	REQUIRE(board->game_over() == false);
	board->mark_board(5);         
	REQUIRE(board->game_over() == false);
	board->mark_board(6);         
	REQUIRE(board->game_over() == false);
	board->mark_board(3);         
	REQUIRE(board->game_over() == false);
	board->mark_board(11);
	REQUIRE(board->game_over() == false);
	board->mark_board(7);         
	REQUIRE(board->game_over() == false);
	board->mark_board(16);


	REQUIRE(board->game_over() == true);
  REQUIRE(board->get_winner() ==  "X");
}

TEST_CASE("Test win diagonally from bottom left (4)")
{ 
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	board->mark_board(4);        
	REQUIRE(board->game_over() == false);
	board->mark_board(3);         
	REQUIRE(board->game_over() == false);
	board->mark_board(7);         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);         
	REQUIRE(board->game_over() == false);
	board->mark_board(10);
	REQUIRE(board->game_over() == false);
	board->mark_board(1);         
	REQUIRE(board->game_over() == false);
	board->mark_board(13);

	REQUIRE(board->game_over() == true);
  REQUIRE(board->get_winner() ==  "X");
}

TEST_CASE("Test for tie (4)")
{ 
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	board->mark_board(1);        
	REQUIRE(board->game_over() == false);
	board->mark_board(2);         
	REQUIRE(board->game_over() == false);
	board->mark_board(3);         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);         
	REQUIRE(board->game_over() == false);
	board->mark_board(5);
	REQUIRE(board->game_over() == false);
	board->mark_board(6);
	REQUIRE(board->game_over() == false);
	board->mark_board(7);
	REQUIRE(board->game_over() == false);
	board->mark_board(8);
	REQUIRE(board->game_over() == false);
	board->mark_board(9);
	REQUIRE(board->game_over() == false);
	board->mark_board(10);
	REQUIRE(board->game_over() == false);
	board->mark_board(11);
	REQUIRE(board->game_over() == false);
	board->mark_board(12);
	REQUIRE(board->game_over() == false);
	board->mark_board(14);
	REQUIRE(board->game_over() == false);
	board->mark_board(13);
	REQUIRE(board->game_over() == false);
	board->mark_board(16);
	REQUIRE(board->game_over() == false);
	board->mark_board(15);
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "C");
} 



