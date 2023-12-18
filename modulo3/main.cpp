// #include "plog/Initializers/RollingFileInitializer.h"
// #include <iostream>
// #include <plog/Log.h> // Step 1: include the logger headers

// #define ENABLE_DEBUG // comment out to disable debugging

// int getUserInput() {
//   PLOGD << "getUserInput() called"; // PLOGD is defined by the plog library

//   std::cout << "Enter a number: ";
//   int x{};
//   std::cin >> x;
//   return x;
// }

// int main() {
//   plog::init(plog::debug, "Logfile.txt"); // Step 2: initialize the logger

//   PLOGD << "main() called"; // Step 3 Output to the log as if you were writing
//                             // to the console

//   int x{getUserInput()};
//   std::cout << "You entered: " << x << '\n';

//   return 0;
// }

#include <iostream>

void printValue(int value) {
  std::cout << value << std::endl;
}

int main() {
  printValue(5);

  return 0;
}

