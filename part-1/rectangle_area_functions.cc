// Brian Milian
// CPSC 120-12
// 2022-11-10
// brianmilian@csu.fullerton.edu
// @brian-250
//
// Lab 10-01
// Partners: @engenies
//
// function RectangleArea() multiplies the length by the width of a rectangle to
// find it's area
//

#include <iostream>

int RectangleArea(int length, int width) {
  int area{-1};
  area = length * width;
  if ((length < 0) || (width < 0)) {
    area = 0;
  }
  return area;
}