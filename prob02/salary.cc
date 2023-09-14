// Alejandro Fonseca
// CPSC 121L-06
// 9/13/2023
// gfon@csu.fullerton.edu
// alejandro-garf
//
// Lab 3-2

#include <iomanip>
#include <iostream>
#include "salary.h"

double CalculateTotalSalary(double hourly_wage, double hours_worked) {
  if (hourly_wage <= 0 || hours_worked <= 0) {
    std::cout << "Invalid input" << std::endl;
    return 0.0;
  }

  double total_salary;

  if (hours_worked <= 40) {
    total_salary = hourly_wage * hours_worked;
  } else if (hours_worked <= 65) {
    total_salary =
        (hourly_wage * 40) + ((hours_worked - 40) * (hourly_wage * 1.5));
  } else {
    total_salary = (hourly_wage * 40) + (hourly_wage * 1.5 * 25) +
                   ((hours_worked - 65) * hourly_wage * 2);
  }

  return total_salary;
}
