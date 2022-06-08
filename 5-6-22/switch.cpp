#include<iostream>
using namespace std;

int main() {

    int year;
    cin >> year;

    switch(year%4) {
    case 0:
        cout << "leapyaer";
        break;
    default:
        cout << "not leapyear";
    }

    return 0;
}
