#include <iostream>
using namespace std;

int main() {

    int userNumber;
    cout << "Please Enter a Number: ";
    cin >> userNumber;

    if(userNumber > 0) {
        cout << "The Number is Positive ";
    }
    else if(userNumber < 0) {
        cout << "The Number is Negative";
    }

    return 0;

}

