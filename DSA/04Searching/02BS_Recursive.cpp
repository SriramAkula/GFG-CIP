#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int low,int high,int x){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]>x){
        return binarySearch(arr,n,low,mid-1,x);
    }
    else{

        return binarySearch(arr,n,mid+1,high,x);
    }

}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    int result = binarySearch(arr, n, 0, n - 1, x);
    
    if (result != -1) {
        cout << "Element is present at index " << result << endl;
    } else {
        cout << "Element is not present in array" << endl;
    }

    return 0;
}

//Height of the tree is ceil log2 n