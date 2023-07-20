// #include <iostream>

// int getValueFromUser()
// {
//     std::cout << "Enter an integer: ";
//     int input{};
//     std::cin >> input;

//     return input; 
// }

// void printDouble(int value)
// {
//     std::cout << value << " doubled is: " << value * 2 << '\n';
// }

// int main()
// {
//     printDouble(getValueFromUser());

//     return 0;
// }

// #include <iostream>

// int add(int x, int y)
// {
//     return x + y;
// }

// int multiply(int z, int w)
// {
//     return z * w;
// }

// int main()
// {
//     std::cout << add(4, 5) << '\n';
//     std::cout << add(1 + 2, 3 * 4) << '\n';

//     int a{ 5 };
//     std::cout << add(a, a) << '\n';

//     std::cout << add(1, multiply(2,3)) << '\n';
//     std::cout << add(1, add(2, 3)) << '\n';

//     return 0;
// }

#include <iostream>

int doubleNumber(int value)
{
    return value * 2;
}

int main()
{
    std::cout << "Enter an integer: ";
    int value{ };
    std::cin >> value;

    std::cout << "Doubled your number is: " << doubleNumber(value) << '\n';

    return 0;
}