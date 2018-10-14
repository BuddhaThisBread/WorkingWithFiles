#include <iostream>
#include <string>

//returns a list containing n number of lines
long get_line_count(long);

long get_line_count() {
  //for every iteration, increase line_count by 1, for menu_prompt
  for (long line_count = 0; getline(read_File, data); ) {
    string data;
    std::cout << data << std::endl;
    ++line_count;
  }
  return line_count;
}
