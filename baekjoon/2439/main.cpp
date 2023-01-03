#include <iostream>

int main() {
  unsigned N;

  std::cin >> N;

  for (unsigned i = 1; i <= N; i ++) {
    for (unsigned j = N; j > i; j --) {
      std::cout << " ";
    }

    for (unsigned j = 0; j < i; j ++) {
      std::cout << "*";
    }

    std::cout << std::endl;
  }

  return 0;
}

