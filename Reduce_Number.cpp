#include<bits/stdc++.h>
using namespace std;

int ReduceNum(int n){
    // Base Case
    if(n==1){
        return 0;
    }
    if(n%2==0){
        return 1+ReduceNum(n/2);
    }
    else {
        return 1+min(ReduceNum(n+1),ReduceNum(n-1));
    }
}

int main(){
    int n;
    cin>>n; 
    cout<<ReduceNum(n)<<endl;
}