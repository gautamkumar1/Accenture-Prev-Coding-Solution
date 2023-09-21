#include<bits/stdc++.h>
using namespace std;

int isFineNum(int*arr1,int m,int*arr2,int n){
    int ans = INT_MIN;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            int diff = abs(arr1[i]-arr2[j]);
            ans = max(ans,diff);
        }
    }
    return ans;
}
int isFineNumSolution(int* arr1, int m, int* arr2, int n) {
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    // Find the minimum and maximum values in arr2
    for (int i = 0; i < n; i++) {
        minVal = min(minVal, arr2[i]);
        maxVal = max(maxVal, arr2[i]);
    }

    int ans = INT_MIN;

    // Iterate through arr1 and calculate the maximum absolute difference
    for (int i = 0; i < m; i++) {
        int diff = max(abs(arr1[i] - minVal), abs(arr1[i] - maxVal));
        ans = max(ans, diff);
    }

    return ans;
}

int main(){
    int arr1[] = {1,2,3,4,5};
    int m = 5;
    int arr2[] = {10,12,34,2,4,89};
    int n = 6;
    cout<<isFineNumSolution(arr1,m,arr2,n)<<endl;
}