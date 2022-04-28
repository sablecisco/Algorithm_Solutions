#include <iostream>
#include <algorithm>
#define MAX 500
using namespace std;

struct Line{
    int left;
    int right;
};

bool compare(Line a, Line b) {
    if (a.left < b.left) return true;
    return false;
}

int n;
Line arr[MAX];
int dp[MAX];

int main() {
    cin >> n;
    fill_n(dp, MAX, 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i].left >> arr[i].right;
    }
    sort(arr + 1, arr + n + 1, compare);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (arr[i].right > arr[j].right) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int max_num = 0;

    for (int i = 1; i <= n; i++) {
        max_num = max(dp[i], max_num);
    }

    cout << n - max_num;
}