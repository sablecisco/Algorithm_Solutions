#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, val;
int ans = 0;
int distance_sum = 0;
vector <int> distancer;
vector <int> price;

int main() {
    cin >> n;

    for (int i = 0; i < n-1; i++) {
        cin >> val;
        distance_sum += val;
        distancer.push_back(val);
    }
    for (int i = 0; i < n; i++) {
        cin >> val;
        price.push_back(val);
    }
    price.back() = 1000000001;
    int min_num = 1000000001;
    
    for (int i = 0; i < n; i++) {
        min_num = min(price[i], min_num);
    }
    int dis_counter = 0;
    for (int i = 0; i < n; i++) {
        if (price[i] == min_num) {
            int temp = price[i] * distance_sum;
            ans += temp;
            break;
        } else {
            int temp = price[i] * distancer[dis_counter];
            ans += temp;
            distance_sum -= distancer[dis_counter];
        }
        dis_counter++;
    }
    cout << ans;
}

