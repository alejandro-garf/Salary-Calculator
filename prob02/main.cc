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
#include "salary.cc"

int main() {
  double hourly_wage, hours_worked;

  std::cout << "Hourly wage: $";
  std::cin >> hourly_wage;

  std::cout << "Hours worked: ";
  std::cin >> hours_worked;

  double total_salary = CalculateTotalSalary(hourly_wage, hours_worked);

  std::cout << "Total Salary Owed: $" << std::fixed << std::setprecision(2)
            << total_salary << std::endl;

  return 0;
}
