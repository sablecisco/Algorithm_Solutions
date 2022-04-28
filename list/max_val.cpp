#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> vec;
int val, ans = 0;
int maxVal = 0;

int main() {
    for (int i = 0; i < 9; i++) {
        cin >> val;
        vec.push_back(val);
        if (val > maxVal) {
            maxVal = val;
            ans = i;
        }
    }
    cout << maxVal <<"\n";
    cout << ans + 1;
}