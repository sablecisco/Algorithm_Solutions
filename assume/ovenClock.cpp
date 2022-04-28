#include <iostream>
#include <algorithm>
using namespace std;

int h, m, c;

int main() {
    cin >> h >> m;
    cin >> c;
    
    if (m + c < 60) {
        cout << h << " " << c + m;
    } else {
        if (m + c >= 60) {
            int time = (m + c) / 60;
            int left = m + c - (time * 60);
            
            if (h + time >= 24) cout << h + time - 24 << " " << left;
            else cout << h + time << " " << left;
        }
    }
}