#include <iostream>

int main() {
  unsigned T;
  unsigned A;
  unsigned B;

  std::cin >> T;

  for (unsigned i = 0; i < T; i ++) {
    std::cin >> A >> B;
    std::cout << A + B << std::endl;
  }

  return 0;
}

