#include <vector>
#include <iostream>

using namespace std;
vector<int> vec;
void pick(int curr, int cnt, int n, int m);

int main() {
    int n, m;

    cin >> n >> m;
    pick(0,0,n,m);
}

void pick(int curr, int cnt, int n, int m) {
    if (cnt == m) {
        for (int elem : vec) {
            cout << elem << " ";
        }
        cout << "\n";
        return;
    }
    if (curr == n) {
        return;
    }

    vec.push_back(curr + 1);
    pick(curr + 1, cnt + 1, n, m);
    vec.pop_back();

    pick(curr + 1, cnt, n, m);
    return;
}