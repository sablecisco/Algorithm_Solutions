#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX] = {0, };
int visited[MAX] = {0, };

void pick(int cnt);

int main() {
    cin >> n >> m;
    pick(0);
}

void pick(int cnt) { 
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] <<" ";
        }
        cout << "\n";
        return;
    }
    for (int i = 1; i < n + 1; i++) {
        if (visited[i] == 0) {
            visited[i] = 1;
            arr[cnt] = i;
            pick(cnt +1);
            visited[i] = 0;
        }
    }
} 