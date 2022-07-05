#include <iostream>
using namespace std;

int main() {
    char character;
    cout << "Enter a Character: ";
    cin >> character;

    if(character >= 'A' && character <= 'Z'){
        cout <<  "Character is uppercase alphabet.";
    } else if(character >= 'a' && character <= 'z'){
         cout << "Character is lowercase alphabet.";
    }



    return 0;
}
