#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 20
using namespace std;
void team_power();
void pick(int curr, int cnt);
int n;
vector<int> team1;
vector<int> team2;
int ans = 1000000000;
int arr[20][20];

int main() {
    cin >> n;

    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    pick(0, 0);
    cout << ans;
}
void team_power() {
    int tp1 = 0;
    int tp2 = 0;

    for (int i = 0; i < team1.size(); i++) {
        for (int j = 0; j < team1.size(); j++) {
            tp1 += arr[team1[i]][team1[j]];
        }
    }
    for (int i = 0; i < team2.size(); i++) {
        for (int j = 0; j < team2.size(); j++) {
            tp2 += arr[team2[i]][team2[j]];
        }
    }
    //cout << "tps : " << tp1 << " "<< tp2 << "\n";
    if (abs(tp1 - tp2) < ans) ans = abs(tp1 - tp2);
    return;
}

void pick(int curr, int cnt) {
    if (cnt == n / 2) {
        for (int i = 0; i < n; i++) {
            if (find(team1.begin(), team1.end(), i) == team1.end())
                team2.push_back(i);
        }
        // for (int elem : team1) {
        //     cout << elem << " ";
        // } cout << "\n";
        // for (int elem : team2) {
        //     cout << elem << " ";
        // } cout << "\n";
        team_power();
        team2.clear();
        return;
    }
    if (curr == n) {
        return;
    }
    
    team1.push_back(curr);
    pick(curr + 1, cnt + 1);
    team1.pop_back();

    pick(curr + 1, cnt);
}