#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    int i = 666;

    while(true) {
        string str = to_string(i);
        
        if (str.find("666") != -1) {
            count++;
        }

        if (count == n) {
            cout << i;
            break;
        }
        i++;
    }
}

// while(true) {
//         string str = to_string(i);
//         int cnt = 1;

//         for (int j = 1; j < str.size(); j++) {
//             if ((str[j] == '6') && (str[j] == str[j-1])) {
//                 cnt++;
//             } else {
//                 cnt = 1;
//             }
//             if (cnt == 3) {
//                 count++;
//                 break;
//             }
//         }
//         if (count == n) {
//             cout << i;
//             break;
//         }
//         i++;
//     }