#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
using namespace std;

int n;
int counter = 0;

void func(int n) {
    vector <int> vec;
    int a = n;
    while (n != 0) {
        vec.push_back(n % 10);
        n = n / 10;
    }
    if (vec.size() == 1) {
        counter++;
        return;
    } else {
        int diff = vec[0] - vec[1];
        for (int i = 1; i < vec.size()-1; i++) {
            if (vec[i] - vec[i+1] == diff) continue;
            else return;
        }
        cout << a << "\n";
        counter++;
        return;
    }
}

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        func(i);
    }
    cout << counter;
}