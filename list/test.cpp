#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n;
string val;
char each;
vector<int> vec;

int main() {
    cin >> n;
    int arr[81] = {0, };
    int count = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> val;
        for (int i = 0; i < val.size(); i++) {
            each = val[i];
            if (each == 'O') {
                count++;
                ans += count;
            } else {
                count = 0;
            }
        }
        cout << ans << "\n";
        ans = 0; count = 0;
    }
}
