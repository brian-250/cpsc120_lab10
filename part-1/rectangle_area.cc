// Brian Milian
// CPSC 120-12
// 2022-11-10
// brianmilian@csu.fullerton.edu
// @brian-250
//
// Lab 10-01
// Partners: @engenies
//
// finds the area of a rectangle
//

#include <iostream>
#include <string>
#include <vector>

#include "rectangle_area_functions.h"

int main(int argc, char const* argv[]) {
  std::vector<std::string> args = std::vector<std::string>{argv, argv + argc};
  if (args.size() == 1) {
    std::cout
        << "Please provide two arguments, a rectangle's length and width.\n";
    return 1;
  }
  if (args.size() != 3) {
    std::cout << "There was a problem reading the input numbers.\n";
    return 1;
  }

  int length{0};
  int width{0};
  int area{0};
  try {
    length = std::stoi(args.at(1));
    width = std::stoi(args.at(2));
  } catch (std::exception const& problem) {
    std::cout << "There was a problem reading the input numbers.\n";
    std::cout << problem.what() << "\n";
    return 1;
  }
  area = RectangleArea(length, width);
  std::cout << length << " x " << width << " = " << area << "\n";
  return 0;
}