#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (strchr("aeiouAEIOU", str[i]) == NULL) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    cout << "Without vowels: " << str << endl;
    return 0;
}