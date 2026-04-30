#include <cctype>
#include <iostream>

int main() {

  // Conversions
  constexpr double YEN_TO_USD{0.0065};
  constexpr double KRONE_TO_USD{0.09};
  constexpr double POUND_TO_USD{1.25};

  // User selection
  double amount{};
  char choice{};

  // Ask user for conversion choice
  std::cout << "Pick which currency to convert into dollars (p, k, y): ";
  std::cin >> choice;
  std::cout << "Enter the amount: $";
  std::cin >> amount;

  // Convert to lowercase
  choice = std::tolower(choice);

  // Print the converted amount
  if (choice == 'p') {
    std::cout << "Pounds converted into dollars: $" << amount * POUND_TO_USD
              << '\n';
  } else if (choice == 'k') {
    std::cout << "Krones converted into dollars: $" << amount * KRONE_TO_USD
              << '\n';
  } else if (choice == 'y') {
    std::cout << "Yen converted into dollars: $" << amount * YEN_TO_USD << '\n';
  } else {
    std::cout << "BAD INPUT!" << '\n';
  }
  return 0;
}
