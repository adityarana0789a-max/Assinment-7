#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sentence[200] = "";
    char word[50];

    cout << "Enter words (type 'done' to stop):\n";

    while (true) {
        cin >> word;
        if (strcmp(word, "done") == 0) break;

        strcat(sentence, word);
        strcat(sentence, " ");
    }

    if (strlen(sentence) > 0) {
        sentence[strlen(sentence) - 1] = '\0';
    }

    cout << "Sentence: " << sentence << endl;

    return 0;
}