#include <iostream>
#include <vector>
using namespace std;

int n, m, val;

vector <int> vec;
vector <int> vec2;
int ans[500001];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val;
        vec.push_back(val);
    }
    
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> val;
        vec2.push_back(val);
    }
    sort(vec.begin(), vec.end());

    for (int i = 0; i < m; i++) {
        int temp = vec2[i];
        
    }
}

