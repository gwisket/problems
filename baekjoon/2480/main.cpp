#include <iostream>
#include <array>
#include <algorithm>

int main() {
  std::array<unsigned, 3> dices;

  for (unsigned i = 0; i < 3; i ++) {
    std::cin >> dices[i];
  }

  std::sort(dices.begin(), dices.end());

  // if all dices have the same number
  if (dices[0] == dices[2]) {
    std::cout << (10000 + dices[0] * 1000);

  // if two dices have the same number
  } else if (dices[0] == dices[1] || dices[1] == dices[2]) {
    std::cout << (1000 + dices[1] * 100);

  // if all dices are identical
  } else {
    std::cout << (dices[2] * 100);
  }

  return 0;
}

