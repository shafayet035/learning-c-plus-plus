#include <iostream>
using namespace std;

int main() {

    int year;
    cout << "enter year: ";
    cin >> year;

    if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0)){
        cout << "LEAP YEAR" ;
    } else {
         cout << "Not Leap YEAR" ;
    }


    return 0;
}
