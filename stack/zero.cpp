#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, val, sum = 0;
    stack <int> st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val;
        if (val == 0) st.pop();
        else st.push(val);
    }
    int range = st.size();
    for (int i = 0; i < range; i++) {
        sum += st.top();
        st.pop();
    }
    cout << sum;

}