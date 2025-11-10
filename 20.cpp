#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100], b[100];
    
    cout << "Enter first string: ";
    cin.getline(a, 100);
    cout << "Enter second string: ";
    cin.getline(b, 100);
    
    if (strlen(a) != strlen(b)) {
        cout << "Not anagrams.\n";
        return 0;
    }
    
    char x[100], y[100];
    strcpy(x, a); strcpy(y, b);
    strlwr(x); strlwr(y);
    
    int count[26] = {0};
    
    for (int i = 0; x[i]; i++) {
        if (isalpha(x[i])) count[x[i] - 'a']++;
        if (isalpha(y[i])) count[y[i] - 'a']--;
    }
    
    bool same = true;
    for (int i = 0; i < 26; i++)
        if (count[i] != 0) same = false;
    
    cout << (same ? "Anagrams.\n" : "Not anagrams.\n");
    
    return 0;
}