#include <iostream>

void triangle(int n) {

    int num{1};
    for (int i{1}; i < n; i++) {
        for (int j{1}; j <= i; j++) {
            std::cout << num++ << " ";
        }
        std::cout << std::endl;
    }
}

void rectangle(int n) {

    int num{1};

    for (int i{1}; i <= n; i++) {
        for (int j{1}; j <= n; j++) {
            std::cout << num++ << " ";
        }
        std::cout << std::endl;
    }
}

void hollowRectangle(int n, int m) {

    for (int i{1}; i <= n; i++) {
        for (int j{1}; j <= m; j++) {

            if (i == 1 || i == n || j == 1 || j == m) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    int m;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;
    std::cout << "Enter the number of columns: ";
    std::cin >> m;

    std::cout << "The triangle of " << n << " is: " << std::endl;
    triangle(n);
    std::cout << std::endl;
    std::cout << "The rectangle of " << n << " is: " << std::endl;
    rectangle(n);
    std::cout << std::endl;
    std::cout << "The hollow rectangle of " << n << " x " << m << " is: " << std::endl;
    hollowRectangle(n, m);

    return 0;
}