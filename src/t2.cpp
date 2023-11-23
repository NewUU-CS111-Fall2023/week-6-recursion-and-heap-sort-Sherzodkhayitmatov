#include <iostream>

bool isPowerOfTwo(int n) {
    if (n == 1) {
        return true;
    } else if (n % 2 == 0 && n > 1) {
        return isPowerOfTwo(n / 2);
    } else {
        return false;
    }
}

int main() {
    int N;
    std::cin >> N;

    if (isPowerOfTwo(N)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}