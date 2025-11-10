
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[3][10];
    cout << "Enter 3 strings:\n";
    
    for (int i = 0; i < 3; i++) {
        cin >> str[i];
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                char temp[10];
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }

    cout << "\nSorted:\n";
    for (int i = 0; i < 3; i++) {
        cout << str[i] << endl;
    }

    return 0;
}