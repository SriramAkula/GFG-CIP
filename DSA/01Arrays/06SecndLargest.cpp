#include <iostream>
using namespace std;

int secondLargest(int arr[],int n){
    int lar=0;
    int res=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[lar]){

            res=lar;
            lar=i;
        }
        else if(arr[i]!=arr[lar]){
            if(res==-1 || arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return res;

}

int main() {
    int arr[]={5,20,12,20,10};
    cout<<secondLargest(arr,5);
    return 0;
}