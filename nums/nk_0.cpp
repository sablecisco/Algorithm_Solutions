#include <iostream>
#include <string>
using namespace std;
#define MAX 2000000000

int n, m, count;
int dp[MAX][MAX];

int main() {
    cin >> n >> m;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (j == 0) dp[i][j] = 1;
            else if (i == j) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }

    int a = dp[n][m];
    string str1 = to_string(a);
    for (int i = str1.size() - 1; i >= 0; i--) {
        if (str1[i] == '0') count ++;
        else break;
    }
    cout << count;
}