#include <iostream>
using namespace std;

int main() {
    string a="100";
    int res=0;
    int i=1;
    // Traverse the string from the end to the beginning
    for(int j = a.length() - 1; j >= 0; j--){
        // Convert character to integer (0 or 1)
        res += (a[j] - '0') * i;
        i *= 2;
    }
    cout << res;
    return 0;
}
