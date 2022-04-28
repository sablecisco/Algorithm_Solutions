#include <iostream>
using namespace std;
int w(int a, int b, int c);

int a = 0;
int b = 0;
int c = 0;
int dp[51][51][51];

int main() {
    while (1) {
        cin >> a >> b >> c;
        if ((a == -1) && (b == -1) && (c == -1)) break;
        int ans = w(a, b, c);
        cout << "w(" << a << ", " << b << ", " << c << ") = ";
        cout << ans << "\n";
    }
}

int w(int a, int b, int c) {
    if ((a <=0) || (b <= 0) || (c <= 0)) {
        return 1;
    }
    else if ((a > 20) || (b > 20) || (c > 20)) {
        return w(20, 20, 20);
    }
    else if (dp[a][b][c] != 0) {
        return dp[a][b][c];
    }
    else if ((a < b) && (b < c)) {
        dp[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
    }
    else {
        dp[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
    }

    return dp[a][b][c];
}