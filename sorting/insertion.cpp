#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> vec;
void insertion(int n);

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        vec.push_back(val);
    }

    insertion(n);

    for (int elem : vec) {
        cout << elem << "\n";
    }
}

void insertion(int n) {
    for (int i = 0; i < n; i ++) {
        int j = i - 1;
        int elem = vec[i];
        while((vec[j] > elem) && (j >= 0)) {
            vec[j+1] = vec[j];
            j -= 1;
        }
        vec[j+1] = elem;
    }
}
