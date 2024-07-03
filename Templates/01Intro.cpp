/*
    1.Write Once, use for any data type.
    2.Like macros,processed by compiler. But better than macros as type checking is performed.
    3.Two types:
        -> Function Templates: sort,linear search,binary search
        -> class Templates: stack,queue,deque
    4.The main concept behind STL.
*/

#include <iostream>
using namespace std;

template<typename T>
T myMax(T x,T y)
{
    return(x>y)?x:y;
}

int main() {
    cout<<myMax<int>(3,7)<<endl;
    cout<<myMax<char>('c','g')<<endl;
    return 0;
}