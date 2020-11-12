#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
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
   a.mark_board(6);
  REQUIRE(a.game_over() == false);
   a.mark_board(7);
  REQUIRE(a.game_over() == false);
   a.mark_board(8);
  REQUIRE(a.game_over() == false);
   a.mark_board(9);
  REQUIRE(a.game_over() == true);

}