#include <iostream>

int facto(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * facto(n-1);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << facto(n) << std::endl;
}