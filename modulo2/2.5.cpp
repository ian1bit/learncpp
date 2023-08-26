// #include <iostream>

// void doSomething()
// {
//     std::cout << "Hello\n";
// }

// int main()
// {
//     int x { 0 };

//     doSomething();

//     return 0;
// }

// #include <iostream>

// int add(int x, int y)
// {
//     return x + y;
// }

// int main()
// {
//     int a { 5 };
//     int b { 6 };

//     std::cout << add(a, b) << "\n";

//     return 0;
// }

#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    int sum{ x + y };
    std::cout << "The sum is: " << sum << '\n';

    return 0;
}