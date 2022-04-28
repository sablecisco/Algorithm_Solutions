#include <iostream>
#define MAX 1010
using namespace std;

int n, k;
int dp[MAX][MAX];

int main() {
    cin >> n >> k;

    if (n == 0) {
        cout << 0;
        exit(0);
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            if (j == 0) dp[i][j] = 1;
            else if (i == j) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j-1] + dp[i-1][j];

            dp[i][j] = dp[i][j] % 10007;
        }
    }
    cout << dp[n][k] % 10007;
}