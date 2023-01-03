#include <iostream>

int main() {
  unsigned T;
  unsigned point;
  unsigned score;
  unsigned totalPoint;
  std::string result;

  std::cin >> T;

  for (unsigned i = 0; i < T; i ++) {
    score = 0;
    point = 1;

    std::cin >> result;

    for (auto &i: result) {
      if (i == 'O') {
        score += point;
        point ++;
      } else {
        point = 1;
      }
    }

    std::cout << score << std::endl;
  }

  return 0;
}

