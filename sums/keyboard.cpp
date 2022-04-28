#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int q;
int sum[222222];
char a;
char prev_char = 'K';
int start, end_num;
string str;

int main() {
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    cin >> str;
    cin >> q;

    int ans[q];
    for (int i = 0; i < q; i++) {
        cin >> a >> start >> end_num;
        bool flag = true;
        if (prev_char == a)  flag = false;
        prev_char = a;
        if (i == 0) {
            if (str[0] == a) sum[0] = 1;
            else sum[0] = 0;
            for (int i = 1; i <= str.size(); i++) {
                if (str[i] != a) sum[i] = 0 + sum[i-1];
                else sum[i] = 1 + sum[i-1];
            }
        } else if (flag){
            if (str[0] == a) sum[0] = 1;
            else sum[0] = 0;
            for (int i = 1; i <= str.size(); i++) {
                if (str[i] != a) sum[i] = 0 + sum[i-1];
                else sum[i] = 1 + sum[i-1];
            }
        }
        
        ans[i] = sum[end_num] - sum[start-1];
    }
    for(int i =0; i < q; i++) {
        cout << ans[i] <<"\n";
    }
}

