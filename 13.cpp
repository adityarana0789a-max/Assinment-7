#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], ch;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter character to find: ";
    cin >> ch;

    char* pos = strrchr(str, ch);

    if (pos != NULL)
        cout << "Last occurrence at position: " << (pos - str) << endl;
    else
        cout << "Not found" << endl;

    return 0;
}