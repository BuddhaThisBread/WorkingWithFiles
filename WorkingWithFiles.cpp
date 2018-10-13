#include <iostream>
#include <fstream>


int main() {
  // OBTAIN DATA FROM FILE (numbers.txt)
  ifstream readData;
  readData.open(/*user defined path*/);

  if (!readData) {
    /*allow user to re-enter path*/
  }

  // Read data from file
  std::cout << readData;

}
