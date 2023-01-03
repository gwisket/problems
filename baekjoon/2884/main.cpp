#include <iostream>

int main() {
  unsigned H;
  unsigned M;

  std::cin >> H >> M;

  if (M < 45) {
    if (H == 0) {
      H = 24;
    }

    H --;
    M += 60;
  }

  M -= 45;

  std::cout << H << " " << M << std::endl;
}

