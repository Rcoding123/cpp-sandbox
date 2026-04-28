#include <iostream>
#include <string>

int main() {

  std::string firstName{};
  int age{};
  double height{};
  int favNumber{};

  std::cout << "Enter your first name, age, height (inches), favorite number: ";
  std::cin >> firstName >> age >> height >> favNumber;

  std::cout << "First name: " << firstName << '\n'
            << "Age: " << age << '\n'
            << "Height: " << height << " inches" << '\n'
            << "Favorite number: " << favNumber << '\n';

  // Challenge Part
  age += 5;
  std::cout << "In 5 years, you will be " << age << " years old." << '\n';
  favNumber *= 2;
  std::cout << "Your favorite number multiplied by 2: " << favNumber << '\n';

  return 0;
}
