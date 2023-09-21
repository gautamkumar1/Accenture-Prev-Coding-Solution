#include<bits/stdc++.h>
using namespace std;

int DigitSum(int num){
    int sum = 0;
    while(num>0){
        sum+=(num%10);
        num/=10;
    }
    return sum;
}

int solution(int*arr,int n){
    int f1 = 0;
    for(int i=0; i<n; i++){
        f1+=DigitSum(arr[i]);
    }
    int f2 = accumulate(arr,arr+n,0);
    int ans = (f1 % 10) - (f2 % 10);
    return ans;
}

int main(){
    int arr[] = {11,14,16,10,9,8,24,5,4,3};
    int n = 10;
    cout<<solution(arr,n)<<endl;
}