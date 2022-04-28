#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> vec;
void selection(int n);

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        vec.push_back(val);
    }

    selection(n);

    for (int elem : vec) {
        cout << elem << "\n";
    }
}

void selection(int n) {
    for (int i = 0; i < n; i ++) {
        int temp = i;
        for (int j = i; j < n; j++) {
            if (vec[i] > vec[j]) {
                temp = j;
            }
        }
        int temp_val = vec[temp];
        vec[temp] = vec[i];
        vec[i] = temp_val;
    }
}