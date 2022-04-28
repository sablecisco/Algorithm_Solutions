#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;

int main() {
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        vec.push_back(val);
    }
    sort(vec.begin(), vec.end());
    cout << vec.front() * vec.back();
}