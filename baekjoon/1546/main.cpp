#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

int main() {
  unsigned score;
  std::vector<unsigned> scores;
  unsigned N;

  std::cin >> N;

  for (unsigned i = 0; i < N; i ++) {
    std::cin >> score;
    scores.emplace_back(score);
  }

  std::cout
    <<
    std::fixed
    <<
    (double) std::accumulate(scores.begin(), scores.end(), decltype(scores)::value_type(0))
    * 100
    / *std::max_element(scores.begin(), scores.end())
    / scores.size();

  return 0;
}

