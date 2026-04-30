#include <iostream>

int main() {

  constexpr double y_dollars = 1.24;
  constexpr double k_dollars = 1.30;
  constexpr double p_dollars = 2.53;

  // User selection
  double amount;
  char choice;

  // Ask user for conversion choice
  std::cout << "Pick which currency to convert into dollars (p, k, y): ";
  std::cin >> choice;
  std::cout << "Enter the amount: $";
  std::cin >> amount;

  // Print the converted amount
  if (choice == 'p') {
    std::cout << "Pounds converted into dollars: $" << amount * p_dollars
              << '\n';
  } else if (choice == 'k') {
    std::cout << "Krones convtered into dollars: $" << amount * k_dollars
              << '\n';
  } else if (choice == 'y') {
    std::cout << "Yen converted into dollars: $" << amount * y_dollars << '\n';
  } else {
    std::cout << "BAD INPUT!" << '\n';
  }
  return 0;
}
