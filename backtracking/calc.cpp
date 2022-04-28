#include <iostream>
#define MAX 11
void answer(int res, int idx);

int arr[MAX] = {0, };
int oper[4] = {0, };
int n;
int max_ans = -100000001;
int min_ans = 100000001;

using namespace std;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++) {
        cin >> oper[i];
    }

    answer(arr[0], 1);

    cout << max_ans << "\n";
    cout << min_ans << "\n";
}

void answer(int res, int idx) {
    if (idx == n) {
        if (res > max_ans) 
            max_ans  = res;
        if (res < min_ans) 
            min_ans = res;
        return;
    }

    for (int i = 0; i < 4; i++) {
        if (oper[i] > 0) {
            oper[i]--;
            if (i == 0) {
                answer(res + arr[idx], idx + 1);
            } else if (i == 1) {
                answer(res - arr[idx], idx + 1);
            } else if (i == 2) {
                answer(res * arr[idx], idx + 1);
            } else {
                answer(res / arr[idx], idx + 1);
            }
            oper[i]++;
        }
    }
    return;
}
