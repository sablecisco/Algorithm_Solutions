#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];
int sum[100001];
int n, m;

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        sum[i] = sum[i-1] + arr[i];
    }
    int max = sum[m];
    for (int i = m+1; i <= n; i++) {
        if (sum[i] - sum[i-m] > max) max = sum[i] - sum[i-m];
    }
    cout << max;

}