#include<bits/stdc++.h>
using namespace std;

bool isValidPass(string str){
    bool flag1 = false; // for upper
    bool flag2 = false; // for digit
    bool flag3 = true; // for space
    bool flag4 = true; // for backslash
    bool flag5 = false; // for starting Character
    bool flag6 = str.length() >= 4; // for length
    for(int i=0; i<str.size(); i++){
        if(isupper(str[i])){
            flag1 = true;
        }
        if(isdigit(str[i])){
            flag2=true;
        }
        if(str[i]==' '){
            flag3=false;
        }
        if(str[i]=='/'){
            flag4=false;
        }
        if(i==0 && !isdigit(str[i])){
            flag5=true;
        }
    }
    if(flag1 && flag2 && flag3 && flag4 && flag5 && flag6){
        return 1;
    }
    else
    {
        return false;
    }
}   

int main(){
    string str = "aA1_67";
    cout<<isValidPass(str)<<endl;
}