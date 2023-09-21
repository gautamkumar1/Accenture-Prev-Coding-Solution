#include <iostream>

using namespace std;
bool solution(int num){
    if(num % 4  == 0 || num % 7 == 0) return 1;
    int cnt = 0;
    while(num>0){
        int d = num % 10;
        cnt++;
        if((cnt==2) && (d==4 || d==7)){
            return 1;
        }
        num/=10;
    }
    return 0;
}
int main() {
    int n;
    cin >> n;
    
    cout<<solution(n)<<endl;

    return 0;
}
