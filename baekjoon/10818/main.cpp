#include <cstdint>
#include <iostream>
#include <vector>

int main() {
  std::uint32_t N;
  std::vector<int32_t> As;
  std::int32_t A;
  std::int32_t min;
  std::int32_t max;

  std::cin >> N;

  for (unsigned i = 0; i < N; i ++) {
    std::cin >> A;
    As.emplace_back(A);
  }

  max = As[0];
  min = As[0];
  for (auto i = As.begin() + 1; i != As.end(); i ++) {
    if (max < *i) {
      max = *i;
    }

    if (min > *i) {
      min = *i;
    }
  }

  std::cout << min << " " << max;

  return 0;
}

