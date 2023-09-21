#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,q,r;
    p = 1;
    q = 3;
    r=8;
    p = (q+1)+r;
    if(5>r){
        q = 6+p;
    }
    else
    {
        r=(p+1)+r;
    }
    p = (r+r)+q;
    if((q+r)<r){
        q=11+r;
    }
    q=(11+10)+q;
    cout<<p+q+r;
    
}