#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    vector<int> vec;
    cin >> n;

    while (n != 0) {
        vec.push_back(n % 10);
        n = n / 10;
    }

    sort(vec.begin(), vec.end());

    for (int i = size(vec) - 1; i >= 0; i--) {
        cout << vec[i] << "";
    }
}