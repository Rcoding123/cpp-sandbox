#include <iostream>
#include <vector>

// The average of the grades - function
double calculateAverage(std::vector<double> grades) {
  double sum{};

  for (auto element : grades) {
    sum += element;
  }
  return sum / grades.size();
}

// The highest grade
double highestGrade(std::vector<double> grades) {
  double highest{grades[0]};

  for (auto element : grades) {
    if (element > highest) {
      highest = element;
    }
  }

  return highest;
}

// The lowest grade
double lowestGrade(std::vector<double> grades) {
  double lowest{grades[0]};

  for (auto element : grades) {
    if (element < lowest) {
      lowest = element;
    }
  }

  return lowest;
}

int main() {

  // Ask the user for grades
  std::cout << "Enter the grades you would like to store (q to terminate): ";

  double grade{};

  // Vector of grades
  std::vector<double> grades{};

  while (std::cin >> grade) {
    grades.push_back(grade);
  }

  // Print all grades
  for (auto element : grades) {
    std::cout << element << " ";
  }

  std::cout << '\n';

  // Print average
  std::cout << "Average of all the grades: " << calculateAverage(grades)
            << '\n';

  // Print the highest grade
  std::cout << "Highest grade: " << highestGrade(grades) << '\n';

  // Print the lowest grade
  std::cout << "Lowest grade: " << lowestGrade(grades) << '\n';

  std::cout << "DONE WITH THE PROGRAM!" << '\n';
}
