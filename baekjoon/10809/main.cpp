#include <iostream>
#include <optional>
#include <array>

int main() {
  std::array<std::optional<unsigned>, 26> positions;
  std::string S;

  std::cin >> S;

  for (unsigned i = 0; i < S.size(); i ++) {
    if (!positions[S[i] - 'a']) {
      positions[S[i] - 'a'] = i;
    }
  }

  for (auto i: positions) {
    std::cout << (int) (i ? *i : -1) << ' ';
  }
  
  return 0;
}

