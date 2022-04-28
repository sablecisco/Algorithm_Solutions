#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    int sum = 0;
    int avg, mid, most, range;
    cin >> n;

    int arr[n];
    int count[8001] = {0};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; // sum for avg
        count[arr[i] + 4000]++;
    }

    sort(arr, arr + n);

    int ans;
    int max = 0;

    for (int i = 0; i < 8001; i++) {
        if (count[i] > max) {
            max = count[i];
            ans = i;
        } 
    }
    for (int i = ans + 1; i < 8001; i++) {
        if (count[i] == max) {
            ans = i;
            break;
        } 
    }

    avg = round(double(sum) / n);
    mid = arr[(n-1) / 2];
    most = ans - 4000;
    range = arr[n-1] - arr[0];
    
    cout << avg <<"\n";
    cout << mid <<"\n";
    cout << most <<"\n";
    cout << range <<"\n";
}