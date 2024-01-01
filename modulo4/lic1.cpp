#include <iostream>

double getDoubleNumber() {
  std::cout << "Enter a double value: ";
  double x{};
  std::cin >> x;
  return x;
}

char getOperator() {
  std::cout << "Enter +, -, *, or /: ";
  char operation{};
  std::cin >> operation;
  return operation;
}

void printResult(double x, char operation,  double y) {
  if (operation == '+')
    std::cout << x << " + " << y << " is " << x + y << '\n';
  else if (operation == '-')
    std::cout << x << " + " << y << " is " << x - y << '\n';
  else if (operation == '*')
    std::cout << x << " + " << y << " is " << x * y << '\n';
  else if (operation == '/')
    std::cout << x << " + " << y << " is " << x / y << '\n';
}

int main() {
  double x{ getDoubleNumber() };
  double y{ getDoubleNumber() };

  char operation{ getOperator() };

  printResult(x, operation, y);

  return 0;
}
