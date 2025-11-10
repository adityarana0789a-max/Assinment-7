#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], ch;
    
    cout << "Enter string: ";
    cin >> str;
    
    cout << "Enter character: ";
    cin >> ch;
    
    char* p = strchr(str, ch);
    
    if (p)
        cout << "Found at position: " << (p - str) << endl;
    else
        cout << "Not found" << endl;
        
    return 0;
}