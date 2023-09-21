#include<bits/stdc++.h>
using namespace std;

int distinctAndDuplicate(int a, int b, int c, int d) {
    unordered_set<int> distinct_nums;
    unordered_set<int> duplicate_nums;
    vector<int> numbers = {a, b, c, d};

    // Find distinct and duplicate numbers
    for (int num : numbers) {
        if (distinct_nums.count(num) > 0) {
            duplicate_nums.insert(num);
        } else {
            distinct_nums.insert(num);
        }
    }

    int duplicateNumber = *duplicate_nums.rbegin(); // Get the last duplicate number

    int sum_of_distinct_nums = 0;
    for (int num : distinct_nums) {
        if (num != duplicateNumber) {
            sum_of_distinct_nums += num;
        }
    }

    int ans = abs(sum_of_distinct_nums - duplicateNumber);
    return ans;
}

int main() {
    int a = 1, b = 2, c = 2, d = 2;
    
    cout<<distinctAndDuplicate(a,b,c,d)<<endl;
    return 0;
}
