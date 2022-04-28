#include <iostream>

#define MAX_NUM 10001
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    int arr[n], ans_arr[n];
    int counter = 0;
    int count[MAX_NUM] = {0};

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        arr[i] = val;
    }
    
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for (int i = 1; i <= MAX_NUM + 1; i++) {
        count[i] += count[i-1];
    }

    for (int i = 0; i < n; i++) {
        ans_arr[count[arr[i]]- 1] = arr[i];
        count[arr[i]]--;
    }
    
    for (int i = 0; i < n; i++) {
        cout << ans_arr[i] << "\n";
    }
}

