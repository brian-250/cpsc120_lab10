// Brian Milian
// CPSC 120-12
// 2022-11-22
// brianmilian@csu.fullerton.edu
// @brian-250
//
// Lab 10-03
// Partners: @engenies
//
// creates a file that outputs a colored canvas of red, green, blue, and yellow
//

#include <Magick++.h>

#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "gradient_functions.h"

// Please do not change the size of the image. This will break
// the automated tests.
const int kImageWidth{512};
const int kImageHeight{512};

int main(int argc, char* argv[]) {
  Magick::InitializeMagick(*argv);

  std::vector<std::string> args = std::vector<std::string>{argv, argv + argc};
  if (args.size() < 2) {
    std::cout << "Please provide a path to a file.\n";
    return 1;
  }

  std::string output_file_name{args.at(1)};
  std::string image_format{".png"};
  if (!HasMatchingFileExtension(output_file_name, image_format)) {
    std::cout << output_file_name << " is missing the required file extension "
              << image_format << ".\n";
    return 1;
  }

  Magick::ColorRGB white(1, 1, 1);
  // Created an image named image that is 512 by 512 pixels and the color white
  Magick::Image image(Magick::Geometry(kImageWidth, kImageHeight), white);

  for (int column = int(image.columns() - 1); column > -1; column--) {
    for (int row = 0; row < image.rows(); row++) {
      double red = double(row) / double(image.columns() - 1);
      double green = double(column) / double(image.rows() - 1);
      double blue = 0.25;
      Magick::ColorRGB color(red, green, blue);
      image.pixelColor(row, column, color);
    }
  }

  image.write(output_file_name);
  return 0;
}