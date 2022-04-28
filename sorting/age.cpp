#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class info {
    public:
    int age;
    int counter;
    string name;

    info(int _age, int _counter, string _name) {
        age = _age;
        counter = _counter;
        name = _name;
    }
};

bool compare(info& a, info& b) {
    if (a.age < b.age) {
        return true;
    } else if (a.age == b.age) {
        return a.counter < b.counter;
    }
    return false;
}

int main() {
    int n, counter;
    counter = 0;
    cin >> n;
    vector<info> vec;

    for (int i = 0; i < n; i++) {
        int age;
        string name;
        counter++;
        cin >> age >> name;
        vec.push_back(info(age, counter, name));
    }

    sort(vec.begin(), vec.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << vec[i].age << " " << vec[i].name << "\n";
    }
}