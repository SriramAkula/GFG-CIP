#include <iostream>
using namespace std;

int search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main() {
    
    int arr[5]={1,2,4,5,6};
    cout<<search(arr,5,5);
    return 0;
}

/*
    Time Complexity:
    Insert:O(n)
    Search:O(n) for unsorted
            O(logn) for sorted
    Deleted: O(n)
    Get ith Element:O(1)
    Update ith Element:O(1)

    Note: Insert at the end and delete from
    the end can be done in O(1) time.
*/