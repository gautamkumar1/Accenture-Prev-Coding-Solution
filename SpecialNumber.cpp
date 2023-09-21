#include<bits/stdc++.h>
using namespace std;

int isSpecialNum(int* arr, int n, int k) {
    int ans = 1;
    int num = 2;
    while (k > 1) {
        bool isSpecial = false;
        for (int j = 0; j < n; j++) {
            if (num % arr[j] == 0) {
                isSpecial = true;
                break;
            }
        }
        if (!isSpecial) {
            ans+=num;
            k--;
        }
        num++;
    }
    return ans;
}

int main() {
    int arr[] = { 2, 3, 4, 5, 6 };
    int n = 5;
    int k = 4;
    cout << isSpecialNum(arr, n, k) << endl;
}
