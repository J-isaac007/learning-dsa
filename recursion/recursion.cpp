#include <iostream>

int sum(int n) {

    if (n == 1) {
        return 1;
    }
    return n + sum(n - 1);
}

int factorial(int n) {

    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n) {

    if (n == 0) {
        return 0;
    }
    
    else if (n == 1 || n == 2) {
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n - 2);
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "The sum of the first " << n << " natural numbers is: " << sum(n) << std::endl;
    std::cout << "The factorial of " << n << " is: " << factorial(n) << std::endl;
    std::cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << std::endl;

    return 0;
}