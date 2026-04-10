#include <iostream>

int triangle(int n) {

    if (n == 1) {
        return 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    return n;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "The triangle of " << n << " is: " << '\n' << triangle(n) << std::endl;

    return 0;
}