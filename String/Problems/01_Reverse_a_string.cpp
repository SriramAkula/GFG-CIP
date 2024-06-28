#include <iostream>
using namespace std;

int main() {
    string a="geeks";
    string res="";
    for(int i=a.length();i>=0;i--){
        res+=a[i];
    }
    cout<<res;
    return 0;
}