#include <iostream>
#include <unordered_set>
using namespace std;

int square_sum(int n) {
    int total = 0;
    while (n > 0) {
        int digit = n % 10;
        total += digit * digit;
        n /= 10;
    }
    return total;
}

bool is_happy(int num) {
    unordered_set<int> seen;
    while (num != -1 && seen.find(num) == seen.end()) {
        seen.insert(num);
        num = square_sum(num);
    }
    return num == 1;
}

int main() {
    int num;
    cin >> num;
    if (is_happy(num)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
