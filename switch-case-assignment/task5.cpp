#include <iostream>

using namespace std;

int main(){

    int a;
    cin >> a;

    switch(a%2) {
        case 0:
            cout << "Even number.";
            break;
        case 1:
            cout << "Odd number.";
            break;
    }
    return 0;

}
