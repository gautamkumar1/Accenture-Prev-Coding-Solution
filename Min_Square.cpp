#include<bits/stdc++.h>
using namespace std;

int MinSquares(int n){
    vector<int>dp(n+1,-1);
    // Base Case
    if(n==0) return 0;

    if(dp[n] != -1) return dp[n];
    int ans = INT_MAX;
    for(int i=1; i<=sqrt(n); i++){
        dp[n] = min(ans,1+helper(dp,n - i*i));
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    cout<<MinSquares(n)<<endl;
    return 0;
}