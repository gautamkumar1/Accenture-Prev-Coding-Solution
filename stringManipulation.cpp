#include<bits/stdc++.h>
using namespace std;
int helper(string str){
    unordered_map<char,int>mp;
    int cnt = 0;
    for(int i=0; i<str.length(); i++){
        mp[str[i]]++;
    }
    for(auto val : mp){
        if(val.second > 2) cnt++;
    }
    return cnt;
}
int isCoolString(string str){
    int n = str.length();
    int cnt = helper(str);
    if(n%2==0 && cnt == 0){
        return 0;
    }
    else
    {
        return cnt;
    }
    
}

int main(){
    string str;
    cin>>str;
    cout<<isCoolString(str)<<endl;
}