// Brian Milian
// CPSC 120-12
// 2022-11-10
// brianmilian@csu.fullerton.edu
// @brian-250
//
// Lab 10-02
// Partners: @engenies
//
// this file is a promise to the main function that there is going to be a
// counties_functions.cc file
//

/* Do not edit below this line. */
/* Do not edit below this line. */
/* Do not edit below this line. */

#ifndef COUNTIES_FUNCTIONS_H
#define COUNTIES_FUNCTIONS_H

#include <iostream>
#include <string>
#include <vector>

std::string AllCountiesString(
    const std::vector<std::vector<std::string>>& ca_counties);

int CountyIndex(const std::vector<std::vector<std::string>>& ca_counties,
                const std::string& match_county);

#endif