#include <iostream>
#include <vector>

using namespace std;

int gcd (int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int n, val, first;
vector <int> vec;
vector <int> vec2;

int main() {
    cin >> n;
    cin >>first;
    for (int i = 1; i < n; i++) {
        cin >> val;
        vec.push_back(val);
        vec2.push_back(gcd(first, val));
    }

    for (int i = 0; i < n-1; i++) {
        cout << first / vec2[i] << "/" << vec[i] / vec2[i] << "\n";
    }
}