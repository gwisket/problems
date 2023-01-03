#include <iostream>

int main() {
  unsigned N;

  std::cin >> N;

  for (unsigned i = 1; i <= 9; i ++) {
    std::cout << N << " * " << i << " = " << N * i << std::endl;
  }

  return 0;
}

