#include <iostream>

int main() {

  double temperature{};
  int choice{};

  std::cout << "Choose a conversion:\n"
            << "1 -> Fahrenheit to Celsius\n"
            << "2 -> Celsius to Fahrenheit\n"
            << "Enter choice: ";

  std::cin >> choice;

  if (choice == 1) {
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> temperature;

    std::cout << "Temperature in Celsius: " << (temperature - 32.0) * 5.0 / 9.0
              << '\n';

  } else if (choice == 2) {
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> temperature;

    std::cout << "Temperature in Fahrenheit: "
              << (temperature * 9.0 / 5.0) + 32.0 << '\n';

  } else {
    std::cout << "Invalid choice\n";
  }

  return 0;
}
