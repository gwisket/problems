#include <iostream>

int main() {
  unsigned N;
  char c;
  unsigned sum;

  std::cin >> N;

  sum = 0;
  for (unsigned i = 0; i < N; i ++) {
    std::cin >> c;
    sum += c - '0';
  }

  std::cout << sum;
}

