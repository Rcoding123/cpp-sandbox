#include <iostream>
#include <random>

int getDeposit() {
  int amount;

  while (true) {
    std::cout << "Enter an amount: $";
    std::cin >> amount;
    if (!std::cin) {
      std::cin.clear();
      std::cin.ignore(1000, '\n');
      std::cout << "NEED TO ENTER A NUMBER!" << '\n';
      continue;
    } else if (amount <= 0) {
      std::cout << "Amount needs to be greater then 0" << '\n';
      continue;
    } else {
      return amount;
    }
  }
}

int getBet(int balance) {
  int amount;

  while (true) {
    std::cout << "Enter an amount to bet: $";
    std::cin >> amount;
    if (!std::cin) {
      std::cin.clear();
      std::cin.ignore(1000, '\n');
      std::cout << "NEED TO ENTER A NUMBER!" << '\n';
      continue;
    } else if (amount <= 0) {
      std::cout << "Amount needs to be greater then 0" << '\n';
      continue;
    } else if (amount > balance) {
      std::cout << "Bet needs to be less then your balance: $" << balance
                << '\n';
      continue;
    } else {
      return amount;
    }
  }
}

int getGuess() {
  int guess;

  while (true) {
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    if (!std::cin) {
      std::cin.clear();
      std::cin.ignore(1000, '\n');
      std::cout << "NEED TO ENTER A NUMBER!" << '\n';
      continue;
    } else if (guess <= 0 || guess > 6) {
      std::cout << "Guess needs to be between 1-6!" << '\n';
      continue;
    } else {
      return guess;
    }
  }
}

int rollDice() {
  // Seed the generator with a hardware source
  static std::random_device rd;

  // Choosing a generator engine
  static std::mt19937 gen(rd());

  // Defining a range [min, max] inclusive
  std::uniform_int_distribution<> distr(1, 6);

  return distr(gen);
};

char getChoice() {
  char choice{};
  while (true) {
    std::cout << "Do you want to play again! (y or n): ";
    std::cin >> choice;
    if (!std::cin) {
      std::cin.clear();
      std::cin.ignore(1000, '\n');
      std::cout << "NEED TO ENTER y or n!" << '\n';
      continue;
    } else if (choice != 'y' && choice != 'n') {
      std::cout << "NEED TO ENTER y or n" << '\n';
      continue;
    } else {
      return choice;
    }
  }
};

bool correctGuess(int number, int guess) { return number == guess; }

int main() {
  std::cout << R"(

██████╗ ██╗ ██████╗███████╗     ██████╗  █████╗ ███╗   ███╗███████╗
██╔══██╗██║██╔════╝██╔════╝    ██╔════╝ ██╔══██╗████╗ ████║██╔════╝
██║  ██║██║██║     █████╗      ██║  ███╗███████║██╔████╔██║█████╗  
██║  ██║██║██║     ██╔══╝      ██║   ██║██╔══██║██║╚██╔╝██║██╔══╝  
██████╔╝██║╚██████╗███████╗    ╚██████╔╝██║  ██║██║ ╚═╝ ██║███████╗
╚═════╝ ╚═╝ ╚═════╝╚══════╝     ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝

        )" << '\n';

  std::cout << "Welcome to the Dice Game!" << '\n';
  int balance{};
  balance = getDeposit();

  while (balance > 0) {
    // Enter the amount of money to bet
    int bet = getBet(balance);

    // Get guess
    int guess = getGuess();

    // Generate random number
    int dice_number = rollDice();

    // Check if the guess matches the dice
    bool result = correctGuess(dice_number, guess);

    // If correct/not correct
    std::cout << "The dice rolled: " << dice_number << '\n';
    if (result) {
      balance += bet;
      std::cout << "You got the number! +$" << bet << '\n';
    } else {
      balance -= bet;
      std::cout << "Your guess is wrong! -$" << bet << '\n';
    }

    // Print balance
    std::cout << "Balance is now: $" << balance << '\n';

    char play_again = getChoice();

    if (play_again == 'y') {
      continue;
    } else {
      std::cout << "THANKS FOR PLAYING!" << '\n';
      return 0;
    }
  }

  std::cout << "RAN OUT OF MONEY! THANK FOR PLAYING!" << '\n';
  return 0;
}
