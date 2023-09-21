#include<bits/stdc++.h>
using namespace std;

int solution(int m,int n){
    int ans = (m+n)/4;
    if(ans <= m){
        return ans;
    }
    else
    {
        ans = min(ans,m);
        return ans;
    }
    
}

int main(){
    int m,n;
    cin>>m>>n;
    cout<<solution(m,n)<<endl;
}