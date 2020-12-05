#include <iostream>
#include <fstream>
int main()
{
  std::ofstream out_file;

  std::cout<<"Open file: ";
  out_file.open("names.dat");

  out_file<<"joe\n";
  out_file<<"mary\n";
  out_file<<"larry\n";
	
	return 0;
}