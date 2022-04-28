#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int n;

int dp[1001];

int main() {
    cin >> n;
    int arr[n+1];
    fill_n(dp, 1001, 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 2; i <=n; i++) {
        for (int j = 1; j <= i; j++) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int max = 0;
    for (int i = 1; i <= n; i++) {
        if (dp[i] > max) max = dp[i];
    }
    cout << max;
}