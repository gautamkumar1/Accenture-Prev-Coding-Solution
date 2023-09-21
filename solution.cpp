#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void reverse(string arr,int l,int h){
    while(l<h){
        swap(arr[l++],arr[h--]);
    }
}
void printExecelColmun(int num){
    string str = "";
    int i = 0;
    while(num > 0){
        int rem = num%10;
        if(rem == 0){
            str[i++] = 'Z';
            num = (num/26)-1;
        }
        else{
            str[i++] = (rem-1)+'A';
            num = num/26;
        }
    }
    reverse(str,0,str.size()-1);
    cout<<str<<endl;
}

int main(){
    int num;
    cin>>num;
    printExecelColmun(num);
}
