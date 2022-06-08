
#include <iostream>
using namespace std;

int main() {

    int nm_1;
    int nm_2;

    cout << "Please enter Number One: ";
    cin >> nm_1;

    cout << "Please Enter Number Two: ";
    cin >> nm_2;

    if(nm_1 > nm_2) {
        cout << nm_1 << " is the maximum Number";
    }
    else {
        cout << nm_2 << " is the maximum Number";
    }

    return 0;

}

