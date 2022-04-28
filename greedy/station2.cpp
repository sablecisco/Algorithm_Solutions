#include <iostream>
#include <algorithm>
using namespace std;

long long dist[100000];
long long price[100000];

long long n, curr, ans = 0;

int main() {
    cin >> n;

    for (int i = 1; i < n; i++) {
        cin >> dist[i];
        
    }
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    curr = price[0];
    ans = price[0] * dist[1];

    for (int i = 1; i < n; i++) {
        if (curr < price[i]) {
            ans += curr * dist[i+1];
        } else {
            curr = price[i];
            ans += curr * dist[i+1];
        }
    }
    cout << ans;
}