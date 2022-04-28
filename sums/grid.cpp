#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int arr[1025][1025];

int main() {
    cin >> n >> m;
    int ans[m];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            arr[i][j] += arr[i-1][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            arr[i][j] += arr[i][j-1];
        }
    }
    int x1, y1, x2, y2;

    for (int i = 0; i < m; i++) {
        int sum = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        sum = arr[x2][y2]-arr[x1-1][y2]-arr[x2][y1-1]+arr[x1-1][y1-1];
        ans[i] = sum;
    }
    for (int elem : ans) cout << elem << "\n";
}