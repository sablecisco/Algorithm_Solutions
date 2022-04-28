#include <iostream>
#include <vector>
int div_sum(int n);

int main() {
    int n;
    std::cin >> n;
    
    int ans = 0;

    ans = div_sum(n);
    if (ans == 0) {
        std::cout << 0 << "\n";
    } else {
        std::cout << ans << "\n";
    }
}

int div_sum(int n) {
    int temp;
    int a;
    for (int i = 1; i < n; i++) {
        a = i;
        temp = 0;
        while (a != 0) {
            temp += a % 10;
            a = a / 10;
        }
        if (temp + i == n) {
            return i;
        }
    }
    return 0;
}

