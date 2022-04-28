# include <iostream>
# include <cmath>

int cnt = 0;

void hanoi(int n, int src, int dest, int temp) {
    cnt += 1;
    if (n == 1) {
        std::cout << src << " " << dest << "\n";
    } else {
        hanoi(n - 1, src, temp, dest);
        std::cout << src << " " << dest << "\n";
        hanoi(n-1, temp, dest, src);
    }
}

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

    int n;
    std::cin >> n;
    std::cout << (1<<n) - 1 << "\n";
    hanoi(n, 1, 3, 2);
}