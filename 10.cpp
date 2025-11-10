#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[10];
    cout << "Enter a string: ";
    cin.getline(str, 10);
    strrev(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}