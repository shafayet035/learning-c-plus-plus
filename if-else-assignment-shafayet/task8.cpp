#include <iostream>
using namespace std;

int main() {
    char character;
    cout << "Enter a Character: ";
    cin >> character;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
       cout << "character is Vowel." ;
    } else {
         cout << "character is Consonant." ;
    }

    return 0;
}
