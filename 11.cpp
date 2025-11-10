#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str, rev;
    cout << "Enter a string: ";
    cin >> str;
    
    rev = str;
    reverse(rev.begin(), rev.end());
    
    if (str == rev)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
        
    return 0;
}