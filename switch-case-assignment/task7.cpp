#include <iostream>

using namespace std;

int main(){

    char character;
    cout << "Enter a Character: ";
    cin >> character;

    int condition = (character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z');

    switch(condition){
        case 1:
           cout << "Character is an ALPHABET.";
            break;
        case 0:
           cout << "Character is NOT ALPHABET.";
            break;
    }
    return 0;

}
