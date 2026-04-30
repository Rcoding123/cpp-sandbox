#include <cctype>
#include <iostream>

int main() {

  // Currency conversion
  constexpr double YEN_TO_USD{0.0065};
  constexpr double KRONER_TO_USD{0.09};
  constexpr double POUND_TO_USD{1.25};

  // User variables
  double amount{};
  char choice{};

  // User action
  std::cout << "Select a currency to convert into dollars (y, k, p): ";
  std::cin >> choice;
  std::cout << "Enter an amount: $";
  std::cin >> amount;

  // lower-case choice
  choice = std::tolower(choice);

  // switch-statements
  switch (choice) {
  case 'p':
    std::cout << "Pounds to dollars: $" << amount * POUND_TO_USD << '\n';
    break;
  case 'k':
    std::cout << "Kroner to dollars: $" << amount * KRONER_TO_USD << '\n';
    break;
  case 'y':
    std::cout << "Yen to dollars: $" << amount * YEN_TO_USD << '\n';
    break;
  default:
    std::cout << "BAD INPUT" << '\n';
    break;
  }

  return 0;
}
