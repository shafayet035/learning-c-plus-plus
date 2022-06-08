#include <iostream>
using namespace std;

int main() {

    int userNumber;
    cout << "Please Enter a Number: ";
    cin >> userNumber;

    if(userNumber%2 == 0) {
        cout << "The Number is Even";
    }
    else {
        cout << "The Number is Odd";
    }

    return 0;

}

