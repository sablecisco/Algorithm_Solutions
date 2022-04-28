#include <iostream>
#include <vector>

void pick(int curr_num, int cnt, std::vector<int> vec, std::vector<int> cards, int &max, int n, int m);
int calc(std::vector<int> cards);

int main() {
    int n, m;
    int val;
    int max = 0;
    std::vector<int> vec;
    std::vector<int> cards;
    std:: cin >> n >> m;
    for (int i = 0; i < n; i++) {
        std::cin >> val;
        vec.push_back(val);
    }

    pick(0, 0, vec, cards, max, n, m);
    std::cout << max << "\n";

}

void pick(int curr_num, int cnt, std::vector<int> vec, std::vector<int> cards, int &max, int n, int m) {
    int temp = 0;
    if (cnt == 3) {
        temp = calc(cards);
        //std::cout << temp << "\n";
        if (temp > max && temp <= m) {
            max = temp;
            if (max == m) {
                std::cout << max << "\n";
                exit(0);
            }
            //std::cout << "max : " << max << "\n";

        }
        return;
    }
    if (curr_num == n) {
        return;
    }


    cards.push_back(vec[curr_num]);
    pick(curr_num + 1, cnt + 1, vec, cards, max, n, m);
    cards.pop_back();

    pick(curr_num + 1, cnt, vec, cards, max, n, m);
}

int calc(std::vector<int> cards) {
    int res = 0;
    for (int elem : cards) {
        res += elem;
    }
    return res;
}