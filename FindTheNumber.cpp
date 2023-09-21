#include<bits/stdc++.h>
using namespace std;

int FindTheNum(string str){
    string GivenAlphabtes = "ABCDE";
    int num = 0; 
    for(auto ch : str){
        num = num * GivenAlphabtes.length(); // multiply num with size of givenAlphabets
        num = num + GivenAlphabtes.find(ch) + 1; // find function return the index of ch from GivenAlphabtes.
    }
    return num;
}

int main(){
    string str;
    cin>>str;
    cout<<FindTheNum(str)<<endl;
}