#include <iostream>
using namespace std;
bool areRotation(string str1, string str2){
    if(str1.length() != str2.length()){
        return false;
    }
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] == str2[0]) {
            if (str1.substr(i) == str2.substr(0, str1.length() - i)) {
                if (str1.substr(0, i) == str2.substr(str1.length() - i))
                    return true;
            }
        }
    }
    return false;
}
int main(){
    string str1 = "AACD", str2 = "ACDA";
    if (areRotation(str1, str2))
        printf("Strings are rotations of each other");
    else
        printf("Strings are not rotations of each other");
    return 0;
}
