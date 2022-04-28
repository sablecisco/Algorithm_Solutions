#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int n;

int dp1[1001];
int dp2[1001];
int ans[1001];


int main() {
    cin >> n;
    int arr[n+1];
    fill_n(dp1, 1001, 1);
    fill_n(dp2, 1001, 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    dp1[0] = 0;
    dp2[0] = 0;

    for (int i = 1; i <=n; i++) {
        for (int j = 1; j <= i; j++) {
            if (arr[i] > arr[j]) {
                dp1[i] = max(dp1[i], dp1[j] + 1);
            }
        }
    }
    
    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= i; j--) {
            if (arr[i] > arr[j]) {
                dp2[i] = max(dp2[i], dp2[j] + 1);
            }
        }
    }
    int max = 0;
    int counter = 1;
    for (int i = 1; i <= n; i++) {
        //cout << dp1[i] << " ";
        ans[counter] += dp1[i];
        counter++;
        // if (dp1[i] > max) max = dp1[i];
    }
    counter = n;
    for (int i = n; i >= 1; i--) {
        ans[counter] += dp2[i];
        counter--;
        // if (dp1[i] > max) max = dp1[i];
    }
    for (int i = 1; i <= n; i++) {
        //cout << ans[i] << " ";
        if (ans[i] > max) max = ans[i];
    }
    //cout << "\n";
    cout << max - 1;
    
}