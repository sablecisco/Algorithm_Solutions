#include <iostream>
using namespace std;

int c, n, m, gcdn;
int gcd(int n, int m);

int main() {
    cin >> c;
    for (int i = 0; i < c; i++) {
        cin >> n >> m;
        gcdn = gcd(n, m);
        cout << n * m / gcdn << "\n";
    }
    return 0;
}

int gcd(int n, int m) {
    if (m == 0) return n;
    else return gcd(m, n % m);
}