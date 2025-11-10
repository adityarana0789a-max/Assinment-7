#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[10];
    cout<<"Enter a string: ";
    cin.getline(str, 10);
    int count = 0;
    for (int i=0; i<strlen(str); i++){
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }

    }
    cout <<"no.of vowels: " <<count <<endl;
    return 0;
}
    