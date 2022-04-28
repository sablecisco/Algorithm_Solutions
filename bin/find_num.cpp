#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m, val;
vector <int> vec;
vector <int> ans;
int bina(int start, int end, int key);

int main() {
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> val;
        vec.push_back(val);
    }
    sort(vec.begin(), vec.end());

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> val;
        int a = bina(0, n, val);
        ans.push_back(a);
    }
    for (int elem : ans) cout << elem << "\n";
}

int bina(int start, int end, int key) {
    if (start >= end) {
        return 0;
    }
    int mid = (start + end) / 2;
    if (key == vec[mid]) return 1;
    else if (key > vec[mid]) return bina(mid + 1, end, key);
    else return bina(0, mid, key);
}