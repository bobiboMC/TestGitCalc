#include <iostream>
#include "Arithmetic.h"

int main()
{
    int number = 5;
    int firstNumber = 4;
    int secondNumber = 3;

    std::cout << "Square of " << number << " = " << square(number) << '\n';
    std::cout << firstNumber << " * " << secondNumber << " = "
              << multiply(firstNumber, secondNumber) << '\n';

    return 0;
}
