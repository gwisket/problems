#include <iostream>
#include <limits>

int main() {
  unsigned A;
  unsigned B;

  std::cin >> A >> B;

  std::cout.precision(std::numeric_limits<double>::max_digits10);
  std::cout << (double) A / B;

  return 0;
}

