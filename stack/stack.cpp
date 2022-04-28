#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
using namespace std;

stack<int> st;
vector <int> vec;

string str;
int val;
int n;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str == "push") {
            cin >> val;
            st.push(val);
        } else if (str == "pop") {
            if (!st.empty()) {
                int a = st.top();
                vec.push_back(a);
                st.pop();
                
            } else {
                vec.push_back(-1);
            }
        } else if (str == "empty") vec.push_back(st.empty());
        else if (str == "top") {
            if (!st.empty()) {
                int a = st.top();
                vec.push_back(a);
            } else {
                vec.push_back(-1);

            }
        }
        else if (str == "size") vec.push_back(st.size());
    }

    for (int elem : vec) cout << elem << "\n";
}