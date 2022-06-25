#include <iostream>
using namespace std;

int main() {
    int cost, sale;
    cout << "Enter cost Price: ";
    cin >> cost;

    cout << "Enter sale Price: ";
    cin >> sale;

    if(sale > cost) {
        cout << "Profit" ;
    } else {
        cout << "Loss" ;
    }


    return 0;
}
