#include <iostream>
using namespace std;
#define max 1000000

int dp[max];
int n;

int main() {
    cin >> n;

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i-2] + dp[i-1]) % 15746;
    }
    cout << dp[n];
}