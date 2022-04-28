#include <iostream>
#include <algorithm>
using namespace std;
int n, k;
int arr[1000000];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> arr[i];

    int count = 0;
    int indicator = n-1;
    while (true) {
        if (k == 0) break;
        if (arr[indicator] > k) indicator--;
        else {
            count++;
            k = k - arr[indicator];
        }
    }
    cout << count;
}