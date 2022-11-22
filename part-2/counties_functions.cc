// Brian Milian
// CPSC 120-12
// 2022-11-10
// brianmilian@csu.fullerton.edu
// @brian-250
//
// Lab 10-02
// Partners: @engenies
//
// function AllCountiesString returns all the counties names, function
// CountyIndex returns the inputted county's index
//

#include "counties_functions.h"

#include <iostream>
#include <string>
#include <vector>

std::string AllCountiesString(
    const std::vector<std::vector<std::string>>& ca_counties) {
  std::string all_counties_string;
  all_counties_string = "";
  int element{0};
  for (int index = 0; index < ca_counties.at(0).size(); index++) {
    all_counties_string += (ca_counties.at(0).at(element) + " ");
    element++;
  }
  return all_counties_string;
}

int CountyIndex(const std::vector<std::vector<std::string>>& ca_counties,
                const std::string& match_county) {
  int index{-1};
  int counter{0};
  for (int column = 0; column < ca_counties.size(); column++) {
    for (int row = 0; row < ca_counties.at(0).size(); row++) {
      if (ca_counties.at(0).at(counter) == match_county) {
        index = std::stoi(ca_counties.at(1).at(counter));
      }
      counter++;
    }
  }
  return index;
}