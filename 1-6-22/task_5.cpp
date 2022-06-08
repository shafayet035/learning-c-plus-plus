#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter a Number: ";
    cin >> number;

    if(number%5 == 0) {
        cout << number << " is divisible by 5";
    }
    else {
        cout << number << " is not divisible by 5";
    }


    return 0;

}

