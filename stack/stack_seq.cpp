#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

int n, val;
bool flag = true;
stack <int> s;
vector <int> seq;
vector <char> ans;


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val;
        seq.push_back(val);
    }
    int len = seq.size();
    int seq_indicator = 0;
    int counter = 1;
    
    while (true) {
        if (seq_indicator == len || flag == false) break;

        if (seq[seq_indicator] >= counter) {
            s.push(counter);
            ans.push_back('+');
            counter++;
        } else if (seq[seq_indicator] < counter) {
            while (true) {
                if (s.empty()) {
                    cout << "NO";
                    flag = false;
                    break;
                }
                int temp = s.top();
                if (temp == seq[seq_indicator]) {
                    s.pop();
                    ans.push_back('-');
                    seq_indicator++;
                    break;
                } else {
                    s.pop();
                    ans.push_back('-');
                }
            }
        }
    }
    if (flag) {
        for (char elem : ans) cout << elem << "\n";
    }
}