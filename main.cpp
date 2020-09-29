#include<iostream>
#include "funcs.h"

int main(){
  std::string thing;
  thing = box(3,5);
  std::cout << "a 3x5 box \n";
  std::cout << thing << std::endl;

  thing = checkerboard(7,6);
  std::cout << "a 7x6 checkerboard: \n";
  std::cout << thing << std::endl;

  thing = cross(7);
  std::cout << "a 7 high cross: \n";
  std::cout << thing << std::endl;

  thing = lower(8);
  std::cout << "the lower portion of a square with side length 8: \n";
  std::cout << thing << std::endl;

  thing = upper(5);
  std::cout << "the upper portion of a square with side length 5: \n";
  std::cout << thing << std::endl;

  thing = trapeziod(11,6);
  std::cout << "trapeziod with a base of 11 and height of 6: \n";
  std::cout << thing << std::endl;

  thing = trapeziod(10,4);
  std::cout << "trapeziod with a base of 10 and height of 4: \n";
  std::cout << thing << std::endl;

  thing = trapeziod(11,7);
  std::cout << "trapeziod with a base of 11 and height of 7: \n";
  std::cout << thing << std::endl;

  thing = checkerboard3x3(7,6);
  std::cout << "a 7x6 checkerboard with 3x3 tiles: \n";
  std::cout << thing << std::endl;

  thing = checkerboard3x3(9,15);
  std::cout << "a 9x15 with 3x3 tiles checkerboard: \n";
  std::cout << thing << std::endl;
}
