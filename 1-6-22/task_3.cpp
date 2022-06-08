#include <iostream>
using namespace std;

int main() {

    char x;
    cout << "Please enter e Capital Character: ";
    cin >> x;

    if(x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
        cout << "The Character is Vowel";
    } else {
        cout << "The character is Consonant";
    }


    return 0;

}

