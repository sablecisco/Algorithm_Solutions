#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> vec;
void bubble(int n);

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        vec.push_back(val);
    }

    bubble(n);

    for (int elem : vec) {
        cout << elem << "\n";
    }
}

void bubble(int n) {
    for (int i = 0; i < n; i ++) {
        for (int j = i; j < n; j++) {
            if (vec[i] > vec[j]) {
                int temp = vec[j];
                vec[j] = vec[i];
                vec[i] = temp;
            }
        }
    }
}