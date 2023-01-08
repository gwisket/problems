#include <iostream>

bool isHansu(unsigned n) {
  if (n < 100) {
    return true;
  } else if (n == 1000) {
    return false;
  }

  return n / 100 + n % 10 == 2 * (n / 10 % 10);
}

int main() {
  unsigned n;
  unsigned hansuCount;

  std::cin >> n;

  hansuCount = 0;
  for (unsigned i = 1; i <= n; i ++) {
    hansuCount += isHansu(i);
  }

  std::cout << hansuCount;

  return 0;
}

