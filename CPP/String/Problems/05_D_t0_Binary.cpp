#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string dec_to_bin(int n){
    string res="";
    while(n>0){
        int t=n%2;
        res=res+to_string(t);
        n=n/2;
    }
    reverse(res.begin(),res.end());
    return res;
}

int main() {
    int n;
    cin>>n;
    string ans=dec_to_bin(n);
    cout<<ans;
    return 0;
}