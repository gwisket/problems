#include <iostream>

int main() {
  std::string id;

  std::cin >> id;

  // escape '?' to prevent trigraph
  std::cout << id << "\?\?!" << std::endl;

  return 0;
}


