#include <iostream>
using namespace std;

int n, m, gcdn, lcm;
int gcd(int n, int m);

int main() {
    cin >> n >> m;
    gcdn = gcd(n, m);
    lcm = n * m / gcdn;
    cout << gcdn << "\n";
    cout << lcm;
}

int gcd(int n, int m) {
    if (m == 0) return n;
    else return gcd(m, n % m);
}