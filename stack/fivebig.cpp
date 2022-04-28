#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int n, val;
vector <int> vec;
vector <int> ans;

stack <int> s;
stack <int> copy_s;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> val;
        vec.push_back(val);
        s.push(val);
        copy_s.push(val);
    }
    int i = 0;
    int len = s.size();
    while (i < n-1) {
        int temp = -1;
        while (s.size() > i+1) {
            if (s.top() > vec[i]) {
                temp = s.top();
            }
            s.pop();
        }
        ans.push_back(temp);
        i++;
        s = copy_s;
    }
    ans.push_back(-1);
    for (int elem : ans) cout << elem << " ";
}