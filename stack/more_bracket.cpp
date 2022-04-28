#include <iostream>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

int n;
string str;
stack <int> s;

int main() {
    while (true) {
        getline(cin, str);
        bool ans = true;
        stack <int> s;
        if (str[0] == '.') break;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '(') s.push(1);
            if (str[i] == '[') s.push(2);
            if (str[i] == ')') {
                if (!s.empty() && s.top() == 1) {
                    s.pop();
                } else {
                    ans = false;
                    break;
                }
            }
            if (str[i] == ']') {
                if (!s.empty() && s.top() == 2) {
                    s.pop();
                } else {
                    ans = false;
                    break;
                }
            }
        }
        if (s.empty() && ans == true) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
}