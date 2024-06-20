/*
    ++,--,ptr+int,ptr-int and ptr1-ptr2
*/
#include <iostream>
using namespace std;

int main() {
    int arr[]={10,20,30,40};
    int *ptr=arr;
    cout<<*ptr<<" "<<ptr<<endl;
    ptr++;
    cout<<*ptr<<" "<<ptr<<endl;
    ptr--;
    cout<<*ptr<<" "<<ptr<<endl;
    ptr=ptr+3;
    cout<<*ptr<<" "<<ptr<<endl;
    ptr=ptr-2;
    cout<<*ptr<<" "<<ptr<<endl;
    int *ptr2=ptr+3;
    cout<<(ptr2-ptr)<<endl;//12 bytes divided by int (4) == 3

    return 0;
}