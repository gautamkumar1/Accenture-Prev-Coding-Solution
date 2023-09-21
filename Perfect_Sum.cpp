#include<bits/stdc++.h>
using namespace std;

int PerfectSum(int n){
    int cnt=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if((i*i)+(j*j*j) <= n){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    int n;
    cin>>n; 
    cout<<PerfectSum(n)<<endl;
}