#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

unsigned d(unsigned n) {
  unsigned result = n;
  div_t q;

  while (n) {
    q = div(n, 10);
    result += q.rem;
    n = q.quot;
  }

  return result;
}

int main() {
  bool sieves[10001] = { false, };
  unsigned i;
  unsigned di;

  for (i = 1; i < 10000; i ++) {
    di = d(i);

    if (di > 10000) {
      continue;
    }

    sieves[di] = true;
  }

  for (i = 1; i <= 10000; i ++) {
    if (!sieves[i]) {
      printf("%u\n", i);
    }
  }

  return 0;
}

