#include <cstdint>
#include <iostream>

int main() {
  uint32_t X;
  unsigned N;
  uint32_t a;
  unsigned b;

  std::cin >> X;
  std::cin >> N;

  for (unsigned i = 0; i < N; i ++) {
    std::cin >> a >> b;
    X -= a * b;
  }

  std::cout << (X ? "No" : "Yes");
}

