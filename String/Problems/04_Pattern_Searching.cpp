#include <iostream>
using namespace std;


void printIndex(string str,string pat){
    int found=str.find(pat);
    while(found!=string::npos){
        cout<<"Pattern found at "<<found<<endl;
        found=str.find(pat,found+1);
    }
}

int main() {
    string a="geeksforgeeks";
    string pat="geek";
    
    printIndex(a,pat);
    
    return 0;
}