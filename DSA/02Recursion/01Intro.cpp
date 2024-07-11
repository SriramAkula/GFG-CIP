//A function calls itself
#include <iostream>
using namespace std;

    void fun1(int n){
        if(n==0){
            return;
        }
        cout<<"GFG"<<endl;
        fun1(n-1);
    }
    int main(){
        fun1(5);
        return 0;
    }


/*
    Applications
    1. Many algorithm techniques are based on Recursion
        ->Dynamic
        ->Backtracking
        ->Divide and conquer
    2.Many problems inherently recursive
        ->Tower oh Hanoi
        ->DFS based traversals
*/