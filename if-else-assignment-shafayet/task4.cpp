#include <iostream>
using namespace std;

int main() {

    int a;

    cin >> a;

    if((a % 5 == 0) && (a % 11 == 0)) {
        cout << "Number is divisible by 5 and 11" ;
    } else{
        cout << "Number is not divisible by 5 and 11" ;
    }


    return 0;
}
