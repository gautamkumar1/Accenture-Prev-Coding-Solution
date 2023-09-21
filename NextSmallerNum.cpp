#include<bits/stdc++.h>
using namespace std;
void nextSmallerElements(int arr[], int n) {
   for(int i=0; i<n; i++){
    int j;
    for(j=i+1; j<n; j++){
        if(arr[j]<arr[i]){
            cout<<arr[j]<<" ";
            break;
            
        }
    }
    if(j==n){
        cout<<"-1";
    }
   }
}

vector<int> OptimalSolutionUsingStack(int arr[], int n) {
    vector<int> result(n, -1);
    stack<int> st;
    
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[i] < arr[st.top()]) {
            result[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    
    return result;
}
int main() {
   int arr[] = {3,2,11,7,6,5,6,1};
   int n = 8;
   nextSmallerElements(arr, n);
   cout<<endl;
    vector<int> ans = OptimalSolutionUsingStack(arr ,n);
    for(auto val : ans){
        cout<<val<<" ";
    }
   return 0;
}
