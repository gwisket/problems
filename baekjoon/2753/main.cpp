#include <iostream>

int main() {
  unsigned year;

  std::cin >> year;
  std::cout << (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));

  return 0;
}

