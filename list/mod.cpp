#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a, b;
int prev = -1;
vector<int> vec;
int nums[10] = {0, };

int main() {
    for (int i = 0; i < 10; i ++) {
        cin >> nums[i];
        vec.push_back(nums[i] % 42);
    }
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    cout << vec.size();
}