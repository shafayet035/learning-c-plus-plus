#include <iostream>
using namespace std;

int main(){

    int a;
    cout << "Enter a Number: "
    cin >> a;

    switch ((a % 5 == 0) && (a % 11 == 0)){
       case 0:
        cout << "a not divisible by both 5 and 11.";
        break;

       case 1:
        cout << "a divisible by both 5 and 11.";
        break;
   }

    return 0;

}
