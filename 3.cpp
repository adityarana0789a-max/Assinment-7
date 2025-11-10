#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[10], str2[10];
    cout << "Enter a string: ";
    cin.getline(str1, 100);
    strcpy(str2, str1);
    cout << "Copied string: " << str2 << endl;
    return 0;
}