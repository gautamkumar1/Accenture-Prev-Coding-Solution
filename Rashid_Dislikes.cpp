#include<bits/stdc++.h>
using namespace std;

int RashidDislikes(int* arr, int n) {
    // Create a vector to store the maximum dislikes for each position
    vector<int> dp(n);
    
    // Initialize the first element of dp with the first element of the input array
    dp[0] = arr[0];
    
    // Iterate through the input array starting from the second element
    for (int i = 1; i < n; i++) {
        // Calculate the maximum dislikes for the current position
        // by considering two possibilities:
        // 1. Skipping the current element and taking the maximum dislikes from the previous position.
        // 2. Taking the current element and adding it to the maximum dislikes from two positions back (if available).
        int checkCond = (i >= 2 ? dp[i - 2] : 0) + arr[i];
        
        // Store the maximum dislikes for the current position in the dp vector
        dp[i] = max(dp[i - 1], checkCond);
    }
    
    // Find the maximum dislikes among all positions in the dp vector
    int ans = *max_element(dp.begin(), dp.end());
    
    // Return the maximum dislikes
    return ans;
}


int main(){
    int arr[] = {1,2,3};
    int n = 3;
    cout<<RashidDislikes(arr,n)<<endl;
}