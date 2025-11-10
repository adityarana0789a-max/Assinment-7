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
        cout << "Equal" << endl;
    else if(strcmp(str1, str2) < 0)
        cout << "First is smaller" << endl;
    else
        cout << "Second is smaller" << endl;
    return 0;
}