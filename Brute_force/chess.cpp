#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, i, j;
    vector <vector <char>> vec;
    vector <char> vec2;
    cin >> n >> m;
    for (i = 0; i < m; i ++) {
        for (j = 0; j < n; j++) {
            int val;
            cin >> val;
            vec2.push_back(val);
        }
        vec.push_back(vec2);
        vec2.clear();
    }


    // for (i = 0; i < n; i ++) {
    //     for (j = 0; j < m; j++) {
    //         cout << vec[i][j] << " ";
    //     }
    //     cout << "\n";
    // }


}