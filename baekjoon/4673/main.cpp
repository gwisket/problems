#include <iostream>
#include <cstdlib>
#include <array>

unsigned d(unsigned n) {
  unsigned result = n;
  std::div_t q;

  while (n) {
    q = std::div(n, 10);
    result += q.rem;
    n = q.quot;
  }

  return result;
}

int main() {
  std::array<bool, 10001> sieves = { false, };
  unsigned di;

  for (unsigned i = 1; i < sieves.size(); i ++) {
    di = d(i);

    if (di >= sieves.size()) {
      continue;
    }

    sieves[di] = true;
  }

  for (unsigned i = 1; i < sieves.size(); i ++) {
    if (!sieves[i]) {
      printf("%u\n", i);
    }
  }

  return 0;
}

