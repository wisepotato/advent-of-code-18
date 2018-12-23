// my first program in C++
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;



int main()
{
   fstream fs;
   fs.open("example.bin", ios::out | ios::app | ios::binary);

   // container
   vector<string> array;

   
   // read file line by line and for each line (std::string)
   string line;
   while (getline(fs, line))
   {
      array.push_back(line);
      cout << line;
   }
}
