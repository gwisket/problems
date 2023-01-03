#include <iostream>

int main() {
  unsigned value;
  unsigned max;
  unsigned maxIndex;

  std::cin >> max;
  maxIndex = 0;

  for (unsigned i = 1; i < 9; i ++) {
    std::cin >> value;

    if (value > max) {
      max = value;
      maxIndex = i;
    }
  }

  std::cout << max << std::endl;
  std::cout << maxIndex + 1 << std::endl;
}

