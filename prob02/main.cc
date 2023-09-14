// Alejandro Fonseca
// CPSC 121L-06
// 9/13/2023
// gfon@csu.fullerton.edu
// alejandro-garf
//
// Lab 2-1

#include <iomanip>
#include <iostream>

#include "salary.h"

int main() {
  double hourly_wage = 0;
  double hours_worked = 0;

  std::cout << "Hourly Wage: $";
  std::cin >> hourly_wage;

  std::cout << "Hours Worked: ";
  std::cin >> hours_worked;

  double invalid = 0;
  double total_salary = CalculateTotalSalary(hourly_wage, hours_worked);

  if (total_salary == invalid) {
    return 0.0;
  }

  std::cout << "Total Salary Owed: $" << std::fixed << std::setprecision(2)
            << total_salary << std::endl;

  return 0;
}
