#include <iostream>

using namespace std;

int main(){

    char character;
    cout << "Enter a Character: ";
    cin >> character;

    int condition = (character=='a' || character=='e' || character=='i' || character=='o' || character=='u');

    switch(condition){
        case 1:
           cout << "Character is an Vowel.";
            break;
        case 0:
           cout << "Character is Consonant.";
            break;
    }
    return 0;

}
