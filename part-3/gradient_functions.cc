// Brian Milian
// CPSC 120-12
// 2022-11-22
// brianmilian@csu.fullerton.edu
// @brian-250
//
// Lab 10-03
// Partners: @engenies
//
// function returns true if a file has the same extension as the one asked for
//

#include "gradient_functions.h"

bool HasMatchingFileExtension(const std::string& file_name,
                              const std::string& extension) {
  return ((file_name.size() >= extension.size()) &&
          (file_name.compare(file_name.size() - extension.size(),
                             extension.size(), extension) == 0));
}