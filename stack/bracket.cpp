#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

int n;
string str;
stack <int> s;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++ ){
        bool ans = true;
        stack <int> s;
        cin >> str;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '(') s.push(1);
            else {
                if (s.empty()) {
                    ans = false;
                    break;
                } else s.pop();
            }
        }
        if (s.size() == 0 && ans == true) cout << "YES"<< "\n";
        else cout << "NO" << "\n";
    }
}