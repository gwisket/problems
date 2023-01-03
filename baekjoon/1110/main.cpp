#include <iostream>
#include <cstdlib>

int main() {
  unsigned N;
  unsigned cycleNumber;
  unsigned cycleLength;
  std::div_t t;

  std::cin >> N;

  cycleNumber = N;
  cycleLength = 0;
  do {
    t = std::div(cycleNumber, 10);
    cycleNumber = t.rem * 10 + (t.quot + t.rem) % 10;

    cycleLength ++;
  } while (N != cycleNumber);

  std::cout << cycleLength;
}

