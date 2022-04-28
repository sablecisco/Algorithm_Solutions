#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 500

int dp[MAX][MAX];
int grid[MAX][MAX];
int n, val;

int main() {
    cin>>n;
    int count = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < count; j++) {
            cin >> val;
            grid[i][j] = val;
        }
        count++;
    }

    dp[0][0] = grid[0][0];
    dp[1][0] = dp[0][0] + grid[1][0];
    dp[1][1] = dp[0][0] + grid[1][1];

    count = 3;
    for (int i = 2; i < n; i++) {
        for (int j = 0; j < count; j++) {
            if (j == 0) dp[i][j] = dp[i-1][j] + grid[i][j];
            else if (j == count-1) dp[i][j] = dp[i-1][j-1] + grid[i][j];
            else dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + grid[i][j];
        }
        count++;
    }
    int max = 0;
    for (int j = 0; j < n; j++) {
        if (dp[n-1][j] > max) max = dp[n-1][j];
    }
    cout << max;
}