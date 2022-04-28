#include <iostream>
using namespace std;

int a, b;
int main() {
    cin >> a >> b;
    
    cout << a * (b % 10) << "\n";
    cout << a * ((b / 10) % 10) << "\n";
    cout << a * ((b / 10)/ 10) << "\n";
    cout << a * b;
}