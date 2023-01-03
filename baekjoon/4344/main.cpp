#include <iostream>
#include <numeric>
#include <vector>

int main() {
  unsigned C;
  unsigned N;
  double grade;
  std::vector<double> grades;
  double average;
  double aboveGradeRate;

  std::cin >> C;

  std::cout.precision(3);

  for (unsigned i = 0; i < C; i ++) {
    grades.clear();
    aboveGradeRate = 0.0;

    std::cin >> N;

    for (unsigned j = 0; j < N; j ++) {
      std::cin >> grade;
      grades.emplace_back(grade);
    }

    average = std::accumulate(grades.begin(), grades.end(), 0.0) / grades.size();

    for (auto i: grades) {
      if (i > average) {
        aboveGradeRate ++;
      }
    }

    aboveGradeRate *= 100;
    aboveGradeRate /= grades.size();

    std::cout << std::fixed << aboveGradeRate << "%" << std::endl;
  }
}

