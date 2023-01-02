#include <iostream>

int main() {
  unsigned pieces[] = { 1, 1, 2, 2, 2, 8 };
  unsigned donghyeokPiece;

  for (unsigned i = 0; i < 6; i ++) {
    std::cin >> donghyeokPiece;
    std::cout << (int) (pieces[i] - donghyeokPiece) << " ";
  }

  std::cout << std::endl;

  return 0;
}

