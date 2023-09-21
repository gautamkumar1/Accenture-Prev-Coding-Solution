#include<bits/stdc++.h>
using namespace std;

void solution(string str){
    string temp = "";
    for(int i=0; i<str.size(); i++){
        if(islower(str[i])){
            temp+=toupper(str[i]);
        }
        else
        {
            temp+='#';
            temp+=tolower(str[i]);
        }
    }
    vector<string> ans;
    string temp2 = "";
    int ind = -1;
    for(int i=0; i<temp.size(); i++){
        if(temp[i] != '#'){
            temp2+=temp[i];
        }
        else
        {
            ind = i;
            ans.push_back(temp2);
            temp2.clear();
        }
        
    }
    temp2.clear();
    for(int i=ind+1; i<=temp.size()-1; i++){
        temp2+=temp[i];
    }
    ans.push_back(temp2);
    for(auto val : ans){
        cout<<val<<endl;
    }
}

int main(){
    string str;
    cin>>str;
    solution(str);
    return 0;
}