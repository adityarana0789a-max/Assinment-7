#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[10], str2[10];
    cout << "Enter first string: ";
    cin.getline(str1, 10);
    cout << "Enter second string: ";
    cin.getline(str2, 10);
    strcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl;
    return 0;
}