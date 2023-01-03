#include <iostream>

int main() {
  unsigned T;
  unsigned A;
  unsigned B;

  std::cin >> T;

  for (unsigned i = 1; i <= T; i ++) {
    std::cin >> A >> B;
    std::cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << std::endl;
  }

  return 0;
}

