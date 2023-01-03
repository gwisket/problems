#include <iostream>

int main() {
  unsigned A;
  unsigned B;
  unsigned C;

  std::cin >> A >> B >> C;

  B += C;

  while (B >= 60) {
    B -= 60;
    A ++;
  }

  if (A >= 24) {
    A -= 24;
  }

  std::cout << A << " " << B;

  return 0;
}

