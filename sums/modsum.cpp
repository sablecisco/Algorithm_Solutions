#include <iostream>
using namespace std;

int arr1[10];

int main() {
    int arr2[10];
    
    for (int i = 0; i < 10; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < 10; i++) {
        cout << arr2[i] << " ";
    }
}