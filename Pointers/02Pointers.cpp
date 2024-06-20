#include <iostream>
using namespace std;

int main() {
    int x=10;
    int *p;
    p=&x;
    cout<<x<<endl;
    cout<< *p <<endl;
    cout<< p <<endl; //hexadecimal value

    return 0;
}