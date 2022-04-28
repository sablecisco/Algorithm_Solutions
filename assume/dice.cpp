#include <iostream>
#include <algorithm>
using namespace std;

int x, y, z;

int main() {
    cin >> x >> y >> z;

    if ((x == y) && (y == z)) {
        cout << 10000 + (x * 1000);
    } else if ((x == y) || (y == z) || (x == z)) {
        if (x == y) {
            cout << 1000 + (100 * x);
        } else if (y == z) {
            cout << 1000 + (100 * y);
        } else if (x == z) {
            cout << 1000 + (100 * x);
        } 
    } else {
        int max_num = max(x, max(y, z));
        cout << 100 * max_num;
    }
}