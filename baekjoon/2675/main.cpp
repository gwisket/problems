#include <iostream>

int main() {
  unsigned T;
  unsigned R;
  std::string S;

  std::cin >> T;

  for (unsigned i = 0; i < T; i ++) {
    std::cin >> R >> S;

    for (auto j: S) {
      for (unsigned k = 0; k < R; k ++) {
        std::cout << j;
      }
    }

    std::cout << std::endl;
  }

  return 0;
}

