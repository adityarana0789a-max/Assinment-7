#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[10], last[10], full[20] = "";
    cout << "Enter first name: ";
    cin.getline(first, 10);
    cout << "Enter last name: ";
    cin.getline(last, 10);
    strcat(full, first);
    strcat(full, " ");
    strcat(full, last);
    cout << "Full name: " << full << endl;
    return 0;
}