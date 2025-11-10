#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    int words = 0;

    cout << "Enter a string: ";
    cin.getline(str, 200);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == ' ' && (i > 0 && str[i-1] != ' ')) {
            words++;
        }
    }

    if (len > 0 && str[len-1] != ' ') {
        words++;
    }

    cout << "Number of words: " << words << endl;

    return 0;
}