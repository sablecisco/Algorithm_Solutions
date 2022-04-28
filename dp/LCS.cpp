#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string strA, strB;

int main() {
    cin >> strA >> strB;
    int len_a = strA.size();
    int len_b = strB.size();
    int dp[len_a + 1][len_b + 1];

    for (int i = 0; i <= len_a; i++) {
        for (int j = 0; j <= len_b; j++) {
            if (i == 0 || j == 0) dp[i][j] = 0;
            else if (strA[i-1] == strB[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    int max_num =  0;
    cout << dp[len_a][len_b];
}


