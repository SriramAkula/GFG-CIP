// #include <iostream>
// using namespace std;

// int main() {
//     string str="gfg";
//     cout<<str.length()<<endl;
//     str=str+"xyz";
//     cout<<str<<endl;
//     cout<<str.substr(1,3)<<endl;
//     cout<<str.find("fg");

//     return 0;
// }

// find


// #include <iostream>
// using namespace std;

// int main() {
//     string str="geeksforgeeks";
//     // int res=str.find("eek");
//     int res=str.find("xyz");
//     if(res==string::npos)
//         cout<<"Not present"<<endl;
//     else
//         cout<<"First Occurence "<<"at index "<<res;
//     return 0;
// }

// // compare

// #include <iostream>
// using namespace std;

// int main() {
//     string s1="abc";
//     string s2="bcd";
//     if(s1==s2){
//         cout<<"same";
    
//     }
//     else if(s1<s2){
//         cout<<"smaller";
//     }else{
//         cout<<"Greater";
//     }
//     return 0;
// }

//Reading a string

#include <iostream>
using namespace std;

int main() {
    string name;
    cout<<"Enter name: ";
    // cin>>name;
    getline(cin,name);
    cout<<"Your name is "<<name;
    return 0;
}