#include <iostream>
using namespace std;

int main() {
    int arr[]={10,20,30};
    int *p1=arr;
    int(*p2)[3] =&arr;
    cout<<*p1<<endl;
    cout<<**p2<<endl;
    return 0;
}
/*
    int *p2 = &arr; would not compile
    int *p2[3];
    would mean an array of pointers of size 3.
*/