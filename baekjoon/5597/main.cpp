#include <cstdint>
#include <iostream>

int main() {
  std::uint32_t sieve = 0;
  unsigned n;

  for (unsigned i = 0; i < 28; i ++) {
    std::cin >> n;
    sieve |= 1 << n;
  }

  for (unsigned i = 1; i <= 30; i ++) {
    if (!(sieve & 1 << i)) {
      std::cout << i << std::endl;
    }
  }

  return 0;
}

