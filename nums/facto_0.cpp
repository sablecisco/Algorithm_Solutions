#include <iostream>
#include <string>
using namespace std;

int n, count;

int main() {
    cin >> n;
    count = n / 5 + n / 25 + n / 125;
    cout << count;
}