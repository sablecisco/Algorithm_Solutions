#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    vector<int> vec;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        vec.push_back(val);
    }
    sort(vec.begin(), vec.end());
    
    for (int elem : vec) {
        cout << elem << "\n";
    }
}