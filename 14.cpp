#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], sub[50];
    cout << "Enter main string: ";
    cin >> str;
    cout << "Enter substring to find: ";
    cin >> sub;

    char* pos = strstr(str, sub);

    if (pos != NULL)
        cout << "Substring found at position: " << (pos - str) << endl;
    else
        cout << "Substring not found" << endl;

    return 0;
}