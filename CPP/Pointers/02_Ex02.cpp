#include <iostream>
using namespace std;

int main() {
    int *p1;
    double *p2;
    string *p3;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3);

    return 0;
}

//Gets same value because it stores addresses (compiler dependent)
