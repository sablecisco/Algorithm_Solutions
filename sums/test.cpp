#include <iostream>
using namespace std;

int q, Sum[222222][26];
string str;

int main() {
cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (i != 0) {
            for (int k = 0; k < 26; ++k)
                Sum[i][k] = Sum[i - 1][k];
        }
        int curr = str[i] - 'a';
        Sum[i][curr]++;
    }

    cin >> q;
    for (int i = 0; i < q; ++i) {
        
        char alp;
        int start, end;
        cin >> alp;
        cin >> start >> end;
        int curr = curr - 'a';

        int p1 = start > 0 ? Sum[start - 1][curr] : 0;
        int p2 = Sum[end][curr];
        cout << p2 - p1 << '\n';
    }

}