#include <iostream>

int main() {

  int counter{0};
  char start{'a'};

  while (counter < 26) {
    std::cout << char(start + counter) << '\t' << int(start + counter) << '\n';
    ++counter;
  }
}
