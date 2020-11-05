//write include statements

//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
#include <iostream>
#include "dna.h"
using std::cout;
using std::endl;
using std::cin;
int main() 
{
  char user_input = 'Y';
  do {
    int input;
    cout<<"Please enter 1 if you would like to use Get GC Content, and press 2 if you would like to use Get DNA complement: ";
    cin>>input;
    string DNA;
    cout<<endl<<"Please enter your dna string (IN ALL CAPS): ";
    cin>>DNA;
    if(input == 1) {
      cout<<"The GC content is "<<get_gc_content(DNA)<<endl;
    }
    else if (input ==2) {
      cout<<"The DNA complement is "<<get_dna_complement(DNA)<<endl;
    }
    cout<<"If you would like to run the program again please enter y, otherwise enter any other character"<<endl;
    cin>>user_input;



  } while(user_input == 'Y' or user_input == 'y');
	return 0;
}