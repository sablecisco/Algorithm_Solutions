#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main() {
    int n, temp;
    cin >> n;
    vector<int> vec;
    vector<int> sorted;
    vector<int> vec2;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        vec.push_back(val);
        sorted.push_back(val);
    }
    sort(vec.begin(), vec.end());

    for (int i = 0; i < n; i++) {
        if (temp != vec[i]) {
            temp = vec[i];
            vec2.push_back(vec[i]);
        }
    }
    vec.clear();

    for (int i = 0; i < n; i++) { 
        int dis;
        dis = find(vec2.begin(),vec2.end(), sorted[i]) - vec2.begin();
        vec.push_back(dis);
    }

    for (int elem : vec) {
        cout << elem << " ";
    }
}