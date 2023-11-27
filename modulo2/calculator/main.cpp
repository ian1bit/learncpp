#include <iostream>

// Full implementation of the getUserInput function
int getUserInput()
{
    std::cout << "Enter an integer: " << std::endl;
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    // Get first number from user
    int value{ getUserInput() }; // Note we've inluded code here to test the return value!
    std::cout << value << std::endl; // debug code to ensure getUserInput() is working, we'll remove this later

    // Get first number from user
// getUserInput();
    // Get mathematical operation from user
// getMathematicalOperation();
    // Get second number from user
// getUserInput();
    // Calculate result
// calculateResult();
    // Print result
// printResult();

    return 0;
}
