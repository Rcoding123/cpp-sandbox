#include <iostream>

int main() {

  std::string first_name{};
  std::string last_name{};
  int x{};

  std::cout
      << "Enter your age | first name | last name | seperated by spaces: ";
  std::cin >> first_name >> last_name >> x;

  std::cout << "First name: " << first_name << " Last name: " << last_name
            << " Age: " << x << '\n';

  return 0;
}
