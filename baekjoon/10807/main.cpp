#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  unsigned N;
  int v;
  std::vector<int> vs;
  unsigned vCount;

  std::cin >> N;

  for (unsigned i = 0; i < N; i ++) {
    std::cin >> v;
    vs.emplace_back(v);
  }

  std::cin >> v;

  std::cout << std::count(vs.begin(), vs.end(), v);

  return 0;
}

