#include <iostream>

int main() {
  unsigned N;
  unsigned X;
  unsigned A;

  std::cin.sync_with_stdio(false);
  std::cin.tie(NULL);

  std::cin >> N >> X;

  for (unsigned i = 0; i < N; i ++) {
    std::cin >> A;

    if (A < X) {
      std::cout << A << " ";
    }
  }

  return 0;
}

