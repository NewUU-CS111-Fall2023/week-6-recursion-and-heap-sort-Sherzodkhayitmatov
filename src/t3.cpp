#include <iostream>

int digitSum(int n) {
    if (n < 10) {
        return n;
    } else {
        return n % 10 + digitSum(n / 10);
    }
}

int main() {
    int N;
    std::cin >> N;

    int sum = digitSum(N);
    std::cout << sum << std::endl;

    return 0;
}