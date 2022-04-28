#include <iostream>
using namespace std;

int a, b, c;
int nums[10] = {0, };

int main() {
    cin >> a >> b >> c;
    int ans = a * b * c;
    while (ans != 0) {
        nums[ans % 10] += 1;
        ans = ans / 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << nums[i] << "\n";
    }
}