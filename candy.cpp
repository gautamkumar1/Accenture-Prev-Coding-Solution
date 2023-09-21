#include<bits/stdc++.h>
using namespace std;

int getminimumCandy(int* rating, int n){
    // Initialize arrays to store the minimum candy count for each position
    int left[n];  // Minimum candies needed when scanning from left to right
    int right[n]; // Minimum candies needed when scanning from right to left
    
    // Initialize all elements of left and right arrays to 1 (minimum candy count)
    for(int i = 0; i < n; i++){
        left[i] = 1;
        right[i] = 1;
    }
    
    // Calculate the minimum candies needed when scanning from left to right
    for(int i = 1; i < n; i++){
        if(rating[i] > rating[i-1]){
            // If the current rating is higher than the previous one, increase the candy count
            left[i] = left[i-1] + 1;
        }
    }
    
    // Calculate the minimum candies needed when scanning from right to left
    for(int j = n - 2; j >= 0; j--){
        if(rating[j] > rating[j+1]){
            // If the current rating is higher than the next one, increase the candy count
            right[j] = right[j+1] + 1;
        }
    }
    // Initialize a variable to store the total minimum candies needed
    int ans = 0;
    // Calculate the total minimum candies needed by taking the maximum from left and right arrays
    for(int i = 0; i < n; i++){
        ans += max(left[i], right[i]);
    }
    // Return the total minimum candies needed
    return ans;
}

int main(){
    int rating[] = {1, 0, 2};
    int n = 3;
    // Calculate and output the minimum candies needed based on the given ratings
    cout << getminimumCandy(rating, n) << endl;
    return 0;
}
