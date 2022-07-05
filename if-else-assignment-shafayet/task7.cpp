#include <iostream>
using namespace std;

int main() {

    char character;
    cout << "Enter a Character: ";
    cin >> character;

    if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')){
        cout << "Alphabet.";
    } else {
       cout << "Not Alphabet.";
    }

    return 0;
}
