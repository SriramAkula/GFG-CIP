#include <iostream>
using namespace std;

int main() {
    int arr[]={10,20,30};
    int *ptr=arr;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<*(arr+2)<<endl; //not recommended
    cout<<ptr[2];

    return 0;
}

//arr[i] -> *(arr+i)
//Recommended practice
//  arr -> arr[i]
//  ptr -> *(ptr + i)