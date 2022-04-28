#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool flag = false;
string str;

int temp = 0;
int sum = 0;

int main( ){
    cin >> str;

    for (int i = 0; i <= str.size(); i++) {
        if (str[i] == '+'|| str[i] == '-' || i == str.size()) {
            if (!flag) {
                sum += temp;
                temp = 0;
            } else if (flag) {
                sum -= temp;
                temp = 0;
            }
            if (str[i] == '-') flag = true;
        } else {
            temp *= 10;
            temp += str[i] - '0';        }
    }
    cout << sum;
}
