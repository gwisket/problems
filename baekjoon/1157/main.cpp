#include <iostream>
#include <map>
#include <cctype>
#include <vector>
#include <algorithm>

int main() {
  std::map<char, unsigned, std::greater<unsigned>> letterFrequencies;
  std::string word;
  std::vector<std::pair<char, unsigned>> letterFrequencyVector;

  std::cin >> word;

  for (const auto &i: word) {
    char letter = std::toupper(i);

    if (letterFrequencies.contains(letter)) {
      letterFrequencies[letter] ++;
    } else {
      letterFrequencies.insert({letter, 1});
    }
  }

  if (letterFrequencies.size() == 1) {
    std::cout << letterFrequencies.begin()->first;

    return 0;
  }

  letterFrequencyVector =
    std::vector<std::pair<char, unsigned>>(
      letterFrequencies.begin(),
      letterFrequencies.end()
    );

  std::ranges::sort(
    letterFrequencyVector,
    [](std::pair<char, unsigned> a, std::pair<char, unsigned> b) {
      return a.second > b.second;
    }
  );

  if (letterFrequencyVector[0].second == letterFrequencyVector[1].second) {
    std::cout << "?";
  } else {
    std::cout << letterFrequencyVector[0].first;
  }

  return 0;
}

