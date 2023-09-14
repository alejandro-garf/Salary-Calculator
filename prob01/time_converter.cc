// Alejandro Fonseca
// CPSC 121L-06
// 9/13/2023
// gfon@csu.fullerton.edu
// alejandro-garf
//
// Lab 3-1

#include <iostream>
#include <string>

std::string MilitaryToRegularTime(int military_time) {
  int hours = military_time / 100;
  int minutes = military_time % 100;
  std::string period;

  if (hours >= 12) {
    period = "PM";
    if (hours > 12) {
      hours -= 12;
    }
  } else {
    period = "AM";
    if (hours == 0) {
      hours = 12;
    }
  }

  std::string hours_str =
      (hours < 10) ? "0" + std::to_string(hours) : std::to_string(hours);
  std::string minutes_str =
      (minutes < 10) ? "0" + std::to_string(minutes) : std::to_string(minutes);

  std::string regular_time = hours_str + ":" + minutes_str + " " + period;

  return regular_time;
}
