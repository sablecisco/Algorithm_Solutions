#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m, val;
int a, b, sum;


int main() {
    cin >> n >> m;
    int arr[n+1];
    int sum[n+1];
    int ans[m];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        sum[i] = sum[i - 1] + arr[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        int temp = sum[b] - sum[a-1];
        ans[i] = temp;
    }
    for(int i = 0; i < m; i++) {
        cout << ans[i] << "\n";
    }
    
}