#include <iostream>

int main() {
  unsigned A;
  unsigned B;

  std::cin >> A >> B;

  std::cout << A + B << std::endl;
  std::cout << (int) (A - B) << std::endl;
  std::cout << A * B << std::endl;
  std::cout << A / B << std::endl;
  std::cout << A % B << std::endl;

  return 0;
}

