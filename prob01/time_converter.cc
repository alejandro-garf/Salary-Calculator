// Alejandro Fonseca
// CPSC 121L-06
// 9/13/2023
// gfon@csu.fullerton.edu
// alejandro-garf
//
// Lab 3-1

#include "time_converter.h"

#include <iostream>
#include <string>

std::string MilitaryToRegularTime(int military_time) {
  int hours = military_time / 100;
  int minutes = military_time % 100;
  std::string minutes_str;
  std::string period;

  if (hours > 12) {
    period = "pm";
  } else {
    period = "am";
  }

  std::string hours_str = std::to_string(hours % 12);
  if (minutes < 10) {
    minutes_str = "0";
  }
  minutes_str += std::to_string(minutes);
  return hours_str + ":" + minutes_str + " " + period;
}
