#include <iostream>
using namespace std;

// class Point{
//     int x;
//     int y;
// };

// int main() {
//     Point p;
//     p.x=10;
//     cout<<p.x;

//     return 0;
// }

struct Point{
    int x;
    int y;
    Point(int a,int b){
        x=a;
        y=b;
    }

    void print(){
        cout<<x<<" "<<y<<endl;
    }
};

int main() {
    Point p(10,20);
    p.print();

    return 0;
}


//you can access members by dot operator in struct
//in class, members are private by default
//in struct, members are public by default