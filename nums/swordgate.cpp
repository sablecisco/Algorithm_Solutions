#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, val;
int diff;
vector <int> vec, vec2;

int gcd(int a, int b) 
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> val;
        vec.push_back(val);
    }
    sort(vec.begin(), vec.end());

    diff = vec[1] - vec[0];
    for (int i = 2; i < n; i++) diff = gcd(diff, vec[i] - vec[i-1]);

    for (int i = 2; i * i <= diff; i++)
        if (diff % i == 0) {
			vec2.push_back(i); 
			vec2.push_back(diff / i);
        }
    
    vec2.push_back(diff);

    sort(vec2.begin(), vec2.end());
    vec2.erase(unique(vec2.begin(), vec2.end()), vec2.end());

    for (int i = 0; i < vec2.size(); i++) {cout << vec2[i] << " ";}
}