#include <iostream>

int main() {

  double fTemp{};
  std::cout << "Enter a temperature in farenheit: ";
  std::cin >> fTemp;

  double cTemp{(fTemp - 32) * (5.0 / 9.0)};
  std::cout << "Temperature in celsius: " << cTemp << '\n';

  return 0;
}
