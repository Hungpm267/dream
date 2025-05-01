#include <iostream>

unsigned long long factorial(int n) {
    if (n < 0) {
        return 0; // Factorial is not defined for negative numbers
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    unsigned long long result = factorial(number);
    if (result == 0 && number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        std::cout << "Factorial of " << number << " is " << result << std::endl;
    }

    return 0;
}