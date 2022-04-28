#include <iostream>
#include <algorithm>
using namespace std;

int h, m;

int main() {
    cin >> h >> m;

    if (m >= 45) {
        cout << h << " " << m - 45;
    } else if (m < 45) {
        if (h != 0) {
            int left = 45 - m;
            cout << h -1 << " " << 60 - left;
        } else if (h == 0) {
            int left = 45 - m;
            cout << 23 << " " << 60 - left;
        }
    }
}