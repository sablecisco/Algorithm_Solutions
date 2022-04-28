#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec;
    vector<int> sorted;
    vector<int> vec2;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        vec.push_back(val);
        sorted.push_back(val);
    }
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    for(int i = 0; i < n; i++) {
        int ans = lower_bound(vec.begin(), vec.end(), sorted[i]) - vec.begin();
        cout << ans << " ";
    }
}