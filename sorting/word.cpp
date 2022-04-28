#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    if (a.size() == b.size()) {
        return a < b;
    } else {
        return a.size() < b.size();
    }
}

int main() {
    int n;
    string temp;
    cin >> n;
    
    vector<string> vec;
    for (int i = 0; i < n; i++) {
        string val;
        cin >> val;
        vec.push_back(val);
    }
    sort(vec.begin(), vec.end(), compare);

    for (string elem: vec) {
        if (temp == elem) continue;
        else {
            temp = elem;
            cout << elem << "\n";
        }
    }
}