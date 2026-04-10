#include <iostream>

void triangle(int n) {

    int num{1};
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << num++ << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "The triangle of " << n << " is: " << std::endl;
    triangle(n);
    return 0;
}