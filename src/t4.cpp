#include <iostream>

bool isPrime(int n, int i = 2) {
    if (n <= 2) {
        return (n == 2);
    }
    if (n % i == 0) {
        return false;
    }
    if (i * i > n) {
        return true;
    }
    return isPrime(n, i + 1);
}

int main() {
    int n;
    std::cin >> n;

    if (isPrime(n)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}