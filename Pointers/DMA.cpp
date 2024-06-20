// new int
//stored in heap
// new to allocate and delete to deallocate

/*
Ex:
int main(){
    static int a;
    int b,c;

    int *ptr=new int[5];
    *(ptr+2)=10;
    delete []ptr;
    ptr=NULL; -> set to null after deallocated 
    return 0;
}

*/
#include <iostream>
using namespace std;

int *fun(){
    int *ptr=new int;
    *ptr=10;
    return ptr;
}

int main() {
    int x,y;
    cout<<*fun();
    int *ptr=fun();
    delete ptr;
    return 0;
}

//Memory leak - allocating memory but not freeng it up

//More on new
/*
    It is an operator
    It returns the pointer to the memory allocated
    Always used for dynamic memory allocation
    Calls constructs for objects of class/struct
    Can initialize value also
*/