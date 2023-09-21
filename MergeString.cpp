#include<bits/stdc++.h>
using namespace std;

string mergeString(string str1,string str2){
    int n1 = str1.length();
    int n2 = str2.length();
    if(n1 == 0 && n2 == 0){
        return "";
    }
    if(n1 == 0){
        return str2;
    }
    if(n2 == 0){
        return str1;
    }
    int len = -1;
    int smalllen = -1;
    if(n1 > n2){
        len = n1;
        smalllen = n2;
    }
    else if(n2 > n1)
    {
        len = n2;
        smalllen = n1;
    }
    else
    {
        len = n1;
        smalllen = n1;
    }
    
    
    int n3 = n1+n2; // output length
    char ch[n3];
    for(int i=0; i<len; i++){
        if((str1[i] < str2[i]) && (i < smalllen)){
            ch[i] = str1[i];
            ch[n3-i-1] = str2[i];
        }
        if((str2[i] < str1[i]) && (i < smalllen))
        {
            ch[i] = str2[i];
            ch[n3-i-1] = str1[i];
        }

        if(i >= n1 && n2 > n1){
            ch[i] = str2[i];
        }
        if(i >= n2 && n1 > n2){
            ch[i] = str1[i];
        }
    }

    string ans = "";
    for(int i=0; i<n3; i++){
        ans+=ch[i];
    }
    return ans;
}

int main(){
    string str1 = "denim";
    string str2 = "are";
    cout<<mergeString(str1,str2)<<endl;
}