#include <iostream>
#include <cmath>

int main() {
  unsigned a;
  unsigned b;

  std::cin >> a >> b;

  for (unsigned i = 0; i < 3; i ++) {
    std::cout
      << a * (b / (unsigned) std::pow(10, i) % 10)
      << std::endl;
  }

  std::cout << a * b << std::endl;

  return 0;
}

