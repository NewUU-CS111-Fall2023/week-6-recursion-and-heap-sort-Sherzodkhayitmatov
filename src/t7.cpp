#include <iostream>

int reverseNumber(int n, int reversed) {
    if (n == 0) {
        return reversed;
    }

    int lastDigit = n % 10;
    reversed = (reversed * 10) + lastDigit;

    return reverseNumber(n / 10, reversed);
}

int main() {
    int n;
    std::cin >> n;

    int reversed = reverseNumber(n, 0);
    std::cout << reversed << std::endl;

    return 0;
}