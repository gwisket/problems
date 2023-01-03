#include <iostream>
#include <cstdint>

int main() {
  uint32_t T;
  uint32_t A;
  uint32_t B;

  std::cin.tie(NULL);
  std::cin.sync_with_stdio(false);

  std::cin >> T;

  for (uint32_t i = 0; i < T; i ++) {
    std::cin >> A >> B;
    std::cout << A + B << '\n';
  }

  return 0;
}

