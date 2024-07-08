#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};
//Pointer
// int main() {
//     Point p={10,20};
//     Point *ptr=&p;
//     cout<<ptr->x<<" ";
//     ptr->x=30;
//     cout<<p.x;
//     return 0;
// }

//Array
int main() {
    Point arr[5];
    for(int i=0;i<5;i++){
        arr[i].x=i;
        arr[i].y=i*10;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i].x<<" "<<arr[i].y<<endl;
    }
    return 0;
}


//Structure Alignments
/*
    Data types(including int,float,double...) have alignment requirements
    A Structure has alignment requirements same as its largest members requirements.
*/