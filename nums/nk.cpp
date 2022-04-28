#include <iostream>
#include <vector>
using namespace std;

int n, m, count;
vector<int> vec;

void pick (int curr, int cnt) {
    if (cnt == m) {
        count++;
        return;
    }
    if (curr == n) return;

    vec.push_back(curr);
    pick(curr + 1, cnt + 1);
    vec.pop_back();

    pick(curr + 1, cnt);
}

int main() {
    cin >> n >> m;

    pick(0 ,0);
    cout << count % 10007;
}