#include <iostream>

void printNumbers(int start, int end) {
    if (start == end) {
        std::cout << start << " ";
        return;
    }

    std::cout << start << " ";
    if (start < end) {
        printNumbers(start + 1, end);
    } else {
        printNumbers(start - 1, end);
    }
}

int main() {
    int A, B;
    std::cin >> A >> B;

    printNumbers(A, B);

    return 0;
}