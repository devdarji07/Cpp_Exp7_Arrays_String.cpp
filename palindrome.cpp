//Dev Darji
//24070123033
//ENTC-A2


#include <iostream>
#include <cstring>  // only for strlen
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100); 
    int len = strlen(str);  
    bool isPalindrome = true;
    for (int i=0;i<len/ 2;i++) {
        if (str[i] != str[len -i-1]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
        cout << "String is Palindrome " << endl;
    else
        cout << "String is not a palindrome" << endl;

    return 0;
}
