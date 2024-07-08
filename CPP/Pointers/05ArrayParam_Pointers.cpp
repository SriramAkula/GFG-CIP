#include <iostream>
using namespace std;

void fun(int arr[])    // = *arr
{
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//Here sizeof(arr) gives 8 -> because size of pointer *arr is 8
//sizeof(arr[0]) is 4
//8/4 =2 so only 2 times the loop will run
int main() {
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    fun(arr); // so use fun(arr,n);
    return 0;
}