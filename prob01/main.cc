// Alejandro Fonseca
// CPSC 121L-06
// 9/13/2023
// gfon@csu.fullerton.edu
// alejandro-garf
//
// Lab 3-1

#include <iostream>
#include <string>

#include "time_converter.h"

int main() {
  int military_time = 0;

  std::cout << "Please enter the time in military time: ";
  std::cin >> military_time;

  std::string regular_time = MilitaryToRegularTime(military_time);

  std::cout << "The equivalent regular time is: " << regular_time << "/n";
  return 0;
}
