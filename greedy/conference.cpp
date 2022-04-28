#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;

struct Point {
    int start;
    int end;
};

vector<Point> vec;

bool comp (Point a, Point b) {
    if (a.end == b.end) return a.start < b.start;
    else return a.end < b.end;
} 

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        Point p;
        cin >> p.start >> p.end;
        vec.push_back(p);
    }
    sort (vec.begin(), vec.end(), comp);

    // for (int i = 0; i < n; i++) {
    //     cout << vec[i].start << " " << vec[i].end << "\n";
    // }

    int curr = vec[0].end;
    int ans = 1;

    for (int i = 1; i < n; i++) {
        if (curr <= vec[i].start) {
            ans++;
            curr = vec[i].end;
        }
    }
    cout << ans;
}
