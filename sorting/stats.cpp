#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
#define MAX_NUM 8000

int most_val(vector<int> vec, int n);

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    int avg, mid, most, range;
    cin >> n;

    vector<int> vec;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        vec.push_back(val);
    }

    int arr[n], ans_arr[n];
    int counter = 0;
    int count[MAX_NUM] = {0};

    sort(vec.begin(), vec.end());

    avg = static_cast<int>(accumulate(vec.begin(), vec.end(), 0) / n);
    mid = vec[static_cast<int> (n/2)];
    most = most_val(vec, n);
    range = vec.back() - vec.front();
    
    cout << avg <<"\n";
    cout << mid <<"\n";
    cout << most <<"\n";
    cout << range <<"\n";
}

int most_val(vector<int> vec, int n) {
    int arr[n], ans_arr[n];
    int max = -1;
    int counter = 0;
    int ans = 0;
    int count[MAX_NUM] = {0};
    
    for (int i =0; i < n; i++) {
        if ((vec[i] <= 4000) || (vec[i] >= -4000)) 
        arr[i] = vec[i];
    }
    for (int i = 0; i < n; i++) {
        count[4000 + (arr[i])]++;
    }
    cout << count[8000] << "\n";
    for (int i = 0; i <= 8000; i++) {
        if ((count[i] == max) && (counter < 2)) {
            counter += 1;
            ans = i;
            cout << "ans : " <<  ans << "\n";
        } else if (count[i] > max) {
            counter = 1;
            max = count[i];
            ans = i;
            cout << count[i] << " \n";
            cout << "ans2 : " <<  ans << "\n";   
        }
    }
    return (ans - 4000);
}