#include <iostream>
#include <set>

int main() {
  unsigned n;
  std::set<unsigned> remainders;

  for (unsigned i = 0; i < 10; i ++) {
    std::cin >> n;

    remainders.insert(n % 42);
  }

  std::cout << remainders.size() << std::endl;

  return 0;
}

