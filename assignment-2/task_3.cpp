#include<iostream>
using namespace std;

int main () {

    int n;
    int sum = 0;

    do {
        cin >> n;
        sum = sum + n;
    } while (n != 0); {
        cout << sum;
    }


    return 0;
}
