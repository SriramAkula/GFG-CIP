#include <iostream>
using namespace std;

// int main() {
//     int *ptr;//Uninitialized -> wild pointer
//     cout<<*ptr;
//     return 0;
// }

//Applications
/*
    1) For Pointer with no valid memory address.
    2)Functions use NULL to return invalid output.
    3)In data structures like Linkedlist,Tree etc.
    
    
 //Important points   
    1)A Null pointer converts to bool value false.And all
    other pointer values convert to true.
    2)Null can be used for any type.
*/
//nullptr in cpp
/*
    1)Added in c++ 11 as replacement of NULL
    2)int x=NULL; is allowed
    3)int x=nullptr; is not allowed.
    4)The type of nullptr is nullptr_t
*/

void fun(int x){ }
void fun(int *ptr){ }
int main(){
    // fun(NULL);
    fun(nullptr);
    return 0;
}