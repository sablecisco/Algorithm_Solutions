#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, val;
vector <int> vec;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> val;
        vec.push_back(val);
    }
    sort(vec.begin(), vec.end());

    int ans = vec[0];
    for (int i = 1; i < n; i++) {
        ans += vec[i];
        for (int j = 0; j < i; j++) {
            ans += vec[j];
        }
    }
    cout << ans;
}