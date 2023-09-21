#include <iostream>
using namespace std;
bool isprime(int num){
    for(int i=2; i<=num/2; i++){
        if(num%i==0) return false;
    }
    return true;
}

int greatestCommonFactor(int num){
    int ans = 1;
    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            ans = i;
        }
    }
    return ans;
}

int isSubDivEqual(int num) {
    int operations = 0;

    while (num > 1) {

        if (isprime(num)) {
            num = num - 1;
            operations++;
        } else {
            num/=greatestCommonFactor(num);
            operations++;
        }
    }

    while (num != 1) {
        num = num - 1;
        operations++;
    }

    return operations;
}

int main() {
    int num;
    cin >> num;
    int ans = isSubDivEqual(num);
    cout << ans <<endl;
    return 0;
}
