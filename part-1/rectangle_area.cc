// Brian Milian
// CPSC 120-12
// 2022-11-10
// brianmilian@csu.fullerton.edu
// @brian-250
//
// Lab 10-01
// Partners: @engenies
//
// returns score using Olympic rules
//

#include <iostream>
#include <string>
#include <vector>

#include "rectangle_area_functions.h"

int main(int argc, char const* argv[]) {
  std::vector<std::string> args = std::vector<std::string>{argv, argv + argc};
  if (args.size() != 3) {
    std::cout << "You have to few arguments. Please input at least 2.";
    return 1;
  }

  int length{0};
  int width{0};
  int area{0};
  try {
    length = std::stoi(args.at(0));
    width = std::stoi(args.at(1));
    area = RectangleArea(length, width);
  } catch (std::exception const& e) {
    std::cout << "Please input a number.";
  }
  std::cout << length << " x " << width << " = " << area;
  return 0;
}