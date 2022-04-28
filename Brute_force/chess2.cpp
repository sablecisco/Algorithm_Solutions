#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

char arr[50][50];
char white_arr[8][8] = {
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W'
};

char black_arr[8][8] = {
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B'
};

int white(int x, int y) {
    int res = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (arr[x + i][y + j] != white_arr[i][j]) {
                res++;
            }
        }
    }
    return res;
}

int black(int x, int y) {
    int res = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (arr[x + i][y + j] != black_arr[i][j]) {
                res++;
            }
        }
    }
    return res;
}

int main() {
    int i, j;
    int n, m, ans = 999999;
    cin >> n >> m;
    for (i = 0; i < n; i ++) {
        for (j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (i = 0; i <= n-8; i++) {
        for (j = 0; j <= m-8; j++) {
            int wtmp, btmp, tmp;
            wtmp = white(i, j);
            btmp = black(i, j);
            tmp = min(btmp, wtmp);
            ans = min(ans, tmp);
        }
    }
    cout << ans;
}