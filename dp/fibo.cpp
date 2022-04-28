#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int t;
int zero[41] = {1, 0};
int one[41] = {0, 1};

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> t;

    for (int i = 2; i < 41; i++) {
        zero[i] = zero[i-1] + zero[i-2];
        one[i] = one[i-1] + one[i-2];
    }
    for (int i = 0; i < t; i++) {
        int a;
        cin >> a;
        cout << zero[a] << " " << one[a] << "\n";
    }

}