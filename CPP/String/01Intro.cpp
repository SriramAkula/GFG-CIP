/*
    Sequence of char
    small set(typically) and no seperator required
    A to Z have 65 to 90
    a to z have values 97 to 122
*/

//C- style string

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main() {
    
//     char s[]="gfg";
//     char s1[]={'c','p','p','\0'}; // \0 is must
//     cout<<strlen(s)<<endl;
//     cout<<strlen(s1)<<endl;

//     int res=strcmp(s,s1);  //lexographically
//     if(res==0){cout<<"same";}
//     else if(res<0){cout<<"smaller";}
//     else{cout<<"Greater";}

//     char str[5];
//     strcpy(str,"gfg");
//     cout<<str;
//     return 0;
// }

//C++ string
/*
    Advantages over c-style string
    -> we do not have to worry about size.
    -> can assign a astring later
    -> support of operators like +,<,>,==,<= and >=
    -> Richer library
    -> can be converted to c-style strings if needed.
*/
#include <iostream>
using namespace std;

int main() {
    string str="geeksforgeeks";
    cout<<str;
    return 0;
}



