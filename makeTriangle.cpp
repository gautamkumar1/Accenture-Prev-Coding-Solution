#include<bits/stdc++.h>
using namespace std;
int maketriangle(int*arr,int n){
    sort(arr,arr+n);
    int ans = 0;
    for(int k=n-1; k>1; k--){
        for(int i=0,j=k-1; i<j;){
            if(arr[i]+arr[j] > arr[k]){
                ans+=(j-i);
                j--;
            }
            else{
                i++;
            }
        }
    }
    return ans;
}

int main(){
    int arr[]={2,2,3,4};
    int n = 4;
    cout<<maketriangle(arr,n)<<endl;
    return 0;
}