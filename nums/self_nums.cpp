#include <iostream>
#include <algorithm>
using namespace std;

int recur(int n) {
    if ( n > 10000) return 0;
    int ans = n;
    while (n != 0) {
        ans += n % 10;
        n = n / 10; 
    }
    return ans;
}
int arr[10001];

int main() {    
    for (int i = 1; i <= 10000; i++) {
        arr[i] = i;
    }
    
    for (int i = 1; i <= 10000; i++) {
        int temp = recur(i);
        arr[temp] = 0;
    }

    for (int i = 1; i <= 10000; i++) {
        if (arr[i] != 0) {
            cout << arr[i] << "\n";
        }
    }
}