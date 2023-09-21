#include<bits/stdc++.h>
using namespace std;

vector<int> ArrayMoified(vector<int>&arr){
    if(arr.size()==0){
        return {};
    }
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int l=0;
    int h=n-1;
    vector<int> ans;
    while(l < h){
        ans.push_back(arr[l]);
        ans.push_back(arr[h]);
        l++;
        h--;
    }
    if(n % 2==0){
        return ans;
    }
    else
    {
        ans.push_back(arr[n/2]);
        return ans;
    }
}

int main(){
    vector<int> arr = {5,2,3,-2};
    vector<int> ans = ArrayMoified(arr);
    for(auto val : ans){
        cout<<val<<" ";
    }
}