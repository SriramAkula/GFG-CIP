#include <iostream>
using namespace std;

template<typename T>
struct Pair{
    T x,y;
    Pair(T i,T j) {x=i;y=j;}
    T getFirst() {return x;}
    T getsecond() {return y;}
};

int main() {
    
    Pair<int> p1(10,20),p2(30,40);
    cout<<p1.getFirst()<<" "<<p1.getsecond();
    return 0;
}