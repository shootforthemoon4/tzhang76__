#include <iostream>
#include <string>

using namespace std;

int main() {
    //variable declarations
    string temp = "This is the first part, ";
    string *str1 = &temp;
    string temp2 = "this is the second part, ";
    string *str2 = &temp2;
    string temp3 = "and this is the third part";
    string *str3 = &temp3;
    
    string str6 = *str1 + *str2 + *str3;
    if(str6.compare("This is the first part, this is the second part, and this is the third part") == 0) cout << str6 << endl << "this is the correct output!" << endl;
    else cout << "this is the incorrect output :(" << endl;
    
    return 0;}
