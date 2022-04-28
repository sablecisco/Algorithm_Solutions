#include <algorithm>
#include <iostream>
#define MAX 15
using namespace std;

int n, total = 0;
int col[MAX];

void nqueen(int k);
bool valid(int lev);

int main() {
    cin >> n;
    nqueen(0);
    cout << total;
}

bool valid(int lev) {
    for (int i = 0; i < lev; i++) {
        if ((col[i] == col[lev]) || (abs(col[lev] - col[i]) == (lev - i))) {
            return false;  
        }
    }
    return true;
}

void nqueen(int k) {
    if (k == n) {
        total++;
    } else {
        for (int i = 0; i < n; i++) {
            col[k] = i;
            if (valid(k)) nqueen(k+1);
        }
    }
}