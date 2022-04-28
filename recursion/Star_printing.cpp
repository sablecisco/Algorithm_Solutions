# include <iostream>

void print_star(int i, int j, int n) {
    if (i / n % 3 == 1 && j / n % 3 == 1) {
        std::cout << " ";
    }
    else if (n / 3 == 0) {
        std::cout << "*";
    }
    else {
        print_star(i, j , n / 3);
    }
    
}

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++ ){
            print_star(i, j, n);
        }
        std::cout << "\n";
    }
}