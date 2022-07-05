#include <iostream>
using namespace std;

int main() {
    char character;
    cout << "Enter a Character: ";
    cin >> character;


    if((character >= 'a' && character <= 'z') ||
       (character >= 'A' && character <= 'Z')) {

        cout << "character is alphabet.";

    } else if(character >= '0' && character <= '9') {

        cout <<  "character is digit.";

    } else {

       cout << "character is special character.";
    }

    return 0;
}
