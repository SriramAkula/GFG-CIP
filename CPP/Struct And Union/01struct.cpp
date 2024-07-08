#include <iostream>
using namespace std;

struct Point //User Defined
{
    int x;
    int y;
};

// typedef struct Point
// {
//     int x;
//     int y;
// }P;

int main() {
    // P p;
    struct Point p; //struct keyword here is optional in cpp
    p.x=10;
    p.y=20;
    cout<<p.x<<" "<<p.y;
    return 0;
}

//designated initialization struct Point p={.y=120,.x=100};