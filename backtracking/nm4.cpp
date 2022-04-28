#include <iostream>
#define MAX 8
using namespace std;

void pick(int cnt);

int n, m;
int arr[MAX] = {0, };
using namespace std;

int main() {
    cin >> n >> m;
    pick(0);
}

void pick(int cnt) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i < n + 1; i++) {
        if (arr[cnt-1] <= i) {
            arr[cnt] = i;
            pick(cnt+1);
        }
    }
}