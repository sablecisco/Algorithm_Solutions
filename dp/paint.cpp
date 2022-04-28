#include <iostream>
#include <algorithm>
using namespace std;

int n, val;
int dp[1001][3];
vector<int> vec;

int main() {
    cin >> n;
    int cost[3];
    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;

    for (int i = 1; i <= n; i++) {
        cin >> cost[0] >> cost[1] >> cost[2];

        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + cost[0];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + cost[1];
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + cost[2];
    }
    int temp = min(dp[n][0], dp[n][1]);
    cout << min(dp[n][2], temp);
}