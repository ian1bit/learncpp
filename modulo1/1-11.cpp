#include <iostream>

int main()
{
    int firstNumber{ };
    int secondNumber{ };

    std::cout << "Insira um número: ";
    std::cin >> firstNumber;
    std::cout << "Insira outro número: ";
    std::cin >> secondNumber;

    std::cout << "O resultado da adição dos números é: " << firstNumber + secondNumber << " e da subtração é: " << firstNumber - secondNumber << std::endl;
}