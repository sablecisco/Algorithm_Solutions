#include <iostream>
using namespace std;

long t, n;
long dp[100];

int main() {
    cin >> t;
    for (int i = 0; i <= 6; i++) {
        if (i < 4) dp[i] = 1;
        else if (i == 4 || i == 5) dp[i] = 2;
        else dp[6] = 3;
    }
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int i = 7; i <= n; i++) {
            dp[i] = dp[i-5] + dp[i-1];
        }
        cout << dp[n]<< "\n";
    }
}
