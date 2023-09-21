#include<bits/stdc++.h>
using namespace std;

int numberofballs(int*arr,int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        int need = (i+1) * (i+1);
        int diff = need - arr[i];
        ans+=diff;
        
    }
    return ans;
}

int main(){
    int arr[] = {1,2,7,13};
    int n = 4;
    cout<<numberofballs(arr,n)<<endl;
}