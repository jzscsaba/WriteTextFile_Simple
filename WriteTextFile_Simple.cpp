/*WriteTextFile_Simple.cpp   C++20!*/
#include <iostream>
#include <fstream>
#include <numbers> 
#include <format>

using namespace std;
using namespace std::numbers;

int main() 
{ // Open the output file
  ofstream out("output.txt");
  // Check if the file was opened successfully
  if (!out.is_open()) 
  { cerr << "Error opening file!" << endl;
    return 1; // Exit 
  }
  int r = 5;
  double area = pi*r*r;
  // Write data to the file
  out << format("Circle {} {:5.2f}",r,area);                  
  // Close the file
  out.close();
  return 0;
}
