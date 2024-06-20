/*
    Problems with normal parameter passing:
    -> changes are not reflected.
    -> the whole object is copied.
*/

//EX- 01

// #include <iostream>
// using namespace std;

// void fun1(int *x){
//     *x=*x+5;
// }
// void fun(int x){
//     x=x+5;
// }

// int main() {
//     int x=10;
//     fun(x);
//     cout<<x<<endl;
//     fun1(&x);
//     cout<<x;

//     return 0;
// }

//Ex- 02

#include <iostream>
using namespace std;

void fun(string *s){
    cout<<*s;
}

int main() {
    string s="geeksforgeeks";
    fun(&s);
    return 0;
}