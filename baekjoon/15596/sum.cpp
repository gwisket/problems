#include <iostream>
#include <vector>

long long sum(std::vector<int> &a) {
  long long total = 0;

  for (auto i: a) {
    total += i;
  }

  return total;
}

