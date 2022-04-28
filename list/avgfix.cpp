#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, val;
vector<double> vec;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val;
        vec.push_back(val);
    }
    sort(vec.begin(), vec.end());
    int m = vec[n - 1];
    double sum = 0;
    for(double elem : vec) {
        sum += (elem / m) * 100;
    }

    cout << sum / n;;
}