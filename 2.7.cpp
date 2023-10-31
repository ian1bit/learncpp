// #include <iostream>

// int add(int x, int y)
// {
//     return x+ y;
// }

// int main()
// {
//     std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
//     return 0;
// }

// #include <iostream>

// // function declaration
// int doMath(int first, int second, int third, int fourth);
// // {
// //      return first + second * third / fourth;
// // }

// int main() 
// {
//     return 0;
// }

#include <iostream>

int add(int x, int y, int z);

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n';
    return 0;
}

int add(int x, int y, int z)
{
    return x + y + z;
}
