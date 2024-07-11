#include <iostream>
using namespace std;

int getLargest(int arr[],int n)
{
    int lar=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>lar){
            lar=arr[i];
        }
    }
    return lar;
}

int main() {
    int arr[]={5,8,20,10};
    cout<<getLargest(arr,4);
    return 0;
}