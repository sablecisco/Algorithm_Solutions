#include <iostream>
using namespace std;

int t, n, m;
int dp[31][31];

int main() {
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cin >> n >> m;

        if (m == 0) {
            continue;
        }
        
        for (int i = 1; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                if (j == 0) dp[i][j] = 1;
                else if (i == j) dp[i][j] = 1;
                else dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }
        cout << dp[m][n] << "\n";
    }
}
