#include <iostream>
#include <algorithm>
#define MAX 300
using namespace std;

int score[10001];
int dp[10001];
int n;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> score[i];
    }
    dp[0] = 0;
    dp[1] = score[1];
    dp[2] = dp[1] + score[2];
    for (int i = 3; i <= n; i++) {
        dp[i] = max(score[i] + max(dp[i-3] + score[i-1], dp[i-2]), dp[i-1]);
    }
    int max = 0;
    for (int i = 1; i <= n; i++) {
        if (dp[i] > max) max = dp[i];
    }
    cout << max;
}