#include <iostream>

void print(double x) { std::cout << x << '\n'; }

int main() {
  print(static_cast<int>(5.5));

  char ch{97};
  std::cout << ch << " has value " << static_cast<int>(ch) << '\n';

  unsigned int u{259};
  int s{static_cast<int>(u)};
  std::cout << s << '\n';

  return 0;
}
