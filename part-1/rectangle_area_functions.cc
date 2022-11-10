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

// Calculate the area of a triangle defined by length and width.
//
// The area of a triangle is the product of the length and width.
//
// Although rectangles with negative length and width exist, this program
// is meant to be used to calculate the positive area of rectangles one
// could encounter in the physical world.
//
// Because of this requirement, length and width must be positive
// integers. Values less than 1 mean that the rectangle has 0 area.
//
// Typical usage:
// \code
//   int input_length = 13;
//   int input_width = 17;
//   int area = RectangleArea(input_length, input_width);
// \endcode
//
// \param length the length of the rectangle
// \param width the width the rectangle
// \returns the area of the rectangle defined by length and width
int RectangleArea(int length, int width) {
  
  int area{-1};
  area = length * width;
  if (length < 0 || width < 0) {
    area = 0;
    return area;
  }
  return area;
}
