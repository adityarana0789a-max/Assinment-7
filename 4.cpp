#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[10], str2[10];
    cout << "Enter first string: ";
    cin.getline(str1, 10);
    cout << "Enter second string: ";
    cin.getline(str2, 10);
    if(strcmp(str1, str2) == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;
    return 0;
}