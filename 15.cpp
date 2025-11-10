#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], sub[50];
    
    cout << "Enter main string: ";
    cin.getline(str, 100);
    
    cout << "Enter string to search: ";
    cin.getline(sub, 50);

    if (strstr(str, sub) != NULL)
        cout << "'" << sub << "' is present in the string." << endl;
    else
        cout << "'" << sub << "' is not present." << endl;

    return 0;
}