#include <iostream>

int fibonacci(int n) {
    
    if (n <= 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    std::cout << "Enter the value of n (1-based index): ";
    std::cin >> n;

    std::cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << std::endl;

    return 0;
}
