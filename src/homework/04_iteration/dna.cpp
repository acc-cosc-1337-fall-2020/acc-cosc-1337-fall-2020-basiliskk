#include "dna.h"
#include <string>
using std::string;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string& input) {
  double GC = 0;
  for(int i = 0; i < input.length(); i++) {
    if(input[i] == 'G' || input[i] == 'C') {
      GC++;
    }
  }
  return GC/input.length();
}


string get_reverse_string(string input) {
  string reverse;
  for(int i = input.length() - 1; i >= 0; i--) {
    reverse.push_back(input[i]);
  }
  return reverse;
}

string get_dna_complement(string input) {
  string complement;
  string a = get_reverse_string(input);
  for(int i = 0; i < a.length(); i++) {
    if(a[i] == 'A') {
      complement.push_back('T');
    }
    else if(a[i] == 'T') {
      complement.push_back('A');
    }
    else if(a[i] == 'G') {
      complement.push_back('C');
    }
    else if(a[i] == 'C') {
      complement.push_back('G');
    }
  }
  return complement;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/



/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

