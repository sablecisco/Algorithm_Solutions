#include <iostream>
#include <vector>

using namespace std;

void check(int n, vector<int> height, vector<int> weight, vector<int> &rank);


int main() {
    vector<int> weight;
    vector<int> height;
    vector<int> rank;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {\
        int temp_weight, temp_height;
        cin >> temp_weight >> temp_height;

        weight.push_back(temp_weight);
        height.push_back(temp_height);
    }

    check(n, height, weight, rank);

    for (int elem : rank) {
        cout << elem << " ";
    }
}

void check(int n, vector<int> height, vector<int> weight, vector<int> &rank) {
    int temp_h, temp_w, comp_h, comp_w;

    for (int i = 0; i < n; i++) {
        int k = 1;
        temp_h = height[i];
        temp_w = weight[i];

        for (int j = 0; j < n; j++) {
            comp_h = height[j];
            comp_w = weight[j];

            if (temp_h < comp_h && temp_w < comp_w) {
                k++;
            }
        }
        rank.push_back(k);
    }
}