#include<iostream>
#include <algorithm>
using namespace std;

long long n, m, val, sum;
long long cnt[1001];
long long ans = 0;

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> val;
        sum += val;
        cnt[sum % m]++;
    }
    
    ans += cnt[0];
	for (int i = 0; i < m; i++) {
		ans += cnt[i] * (cnt[i] - 1) / 2;
	}
	
	cout << ans;
}