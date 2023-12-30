#include <iostream>

int main() {
  std::cout << "Input a keyboard character: ";

  char ch{};
  std::cin >> ch;
  std::cout << "You entered\t blabla: " << ch << '\n';

  std::cin >> ch;
  std::cout << "You entered: " << ch << '\n';

  return 0;
}
