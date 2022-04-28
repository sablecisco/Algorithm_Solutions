#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 100000

int dp[MAX];
int n;

int main() {
    fill_n(dp, MAX, 0);
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    dp[1] = arr[1];
    for (int i = 2; i <= n; i++) {
        dp[i] = max(arr[i], max(dp[i-1] + arr[i], arr[i - 1] + arr[i]));
    }
    int max_num = -1001;
    for (int i = 1; i <= n; i++) {
        max_num = max(dp[i], max_num);
    }
    cout << max_num;
}