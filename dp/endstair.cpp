#include <iostream>
#include <algorithm>
#define MAX 300
using namespace std;

int score[301];
int dp[301];
int n;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> score[i];
    }
    dp[0] = 0;
    dp[1] = score[1];
    dp[2] = score[1] + score[2];
    dp[3] = max(score[1], score[2]) + score[3];

    for (int i = 4; i <= n; i++) {
        dp[i] = max((dp[i-3] + score[i-1]), dp[i-2]) + score[i];
    }
    cout << dp[n];
}