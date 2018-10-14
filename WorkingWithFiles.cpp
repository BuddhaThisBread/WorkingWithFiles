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
  while (getline(read_File, data)){
    std::cout << data << std::endl;
  }

  //prompt
  std::cout << "Would you like to change/amend your data file? [Y/N]: "
            << std::flush;
  char ans;
  std::cin >> ans;


  if (ans == 'Y') {
    std::cout << "Change or Add? [C/A]: " << std::flush;
    cin >> ans;

    if (ans == 'C') {
      //switch statment that allows user's to change a specific line
    } else
    if (ans == 'A') {
      //find a way to not overwrite file but just add onto it
    } else
    std::cout << "Please enter 'C' or 'N': " << std::flush;
    //make it so that the program starts up again at (39)

  } else
  if (ans == 'N') {
    read_File.close();
    std::cout << "Thanks for using my program." << std::endl;
  }

}
