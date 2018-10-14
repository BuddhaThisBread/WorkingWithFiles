#include <iostream>
#include <fstream>
#include <string>

int main() {
  // PROGRAM TO ALLOW USER TO CHANGE/AMEND THEIR CHOSEN FILE

  //prompt
  std::cout << "Please enter the entire path to the file"
            << " you wish to add to or change:" << std::flush;

  //will turn this into a function to check if path is opened (13-26)
  string file_Path;
  std::cin >> file_Path;

  //display data from file
  ifstream read_File;
  read_File.open(file_Path);

  // check if ifso was able to connect to file
  if (!read_File) {
    std::cout << "Process failed. Please re-enter the file path: "
              << std::flush;
    std::cin >> file_Path;
    //while !read_File, keep running this program
  }

  //read all data from file
  get_line_count();

  //prompt for changing/ammending file
  std::cout << "Would you like to change or add onto your file? [C/A]: "
            << std::flush;
  char ans;
  cin >> ans;

  if (ans == 'C') {
    std::cout << "Enter the number for the coresponding line to change it: "
              << std::flush;

  }


}
