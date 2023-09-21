#include<bits/stdc++.h>
using namespace std;

int isStrongPass(string str){
    int cnt = 0;
    if(str.size() < 6 || str.size() > 26) cnt++;
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(isupper(ch)==0) cnt++;
        else if(islower(ch)==0) cnt++;
        else if(isdigit(ch)==0) cnt++;
        else if(ch != '@' || ch!='!' || ch != '#' || ch != '&' || ch != '^' || ch != '%' || ch != '*') cnt++;
        else if(ch == str[i-1]) cnt++;
    }
    return cnt;
}

int main(){
    string str;
    cin>>str;
    cout<<isStrongPass(str);
}