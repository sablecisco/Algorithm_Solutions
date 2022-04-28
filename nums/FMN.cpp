#include <iostream>
using namespace std;

int a, b;
int decider(int a, int b);

int main() {
    while (1) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;

        int n = decider(a, b);
        if (n == 1) cout << "multiple" << "\n";
        if (n == 2) cout << "factor" << "\n";
        if (n == 3) cout << "neither" << "\n";
    }
    return 0;
}

int decider(int a, int b) {
    if (a > b) {
        if (a % b == 0) return 1;
    } else if (a <= b) {
        if (b %  a == 0) return 2;
    } else return 3;
    return 3;
}