#include <iostream>
using namespace std;

int main() {
    string a="abba";
    string res="";
    for(int i=a.length()-1;i>=0;i--){
        res+=a[i];
    }
    cout<<a<<endl;
    cout<<res<<endl;
    if(a==res){
        cout<<"Palindrome";
    }else{
        cout<<"Not palindrome";
    }
    return 0;
}