#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    int n, x;
    cin >> n;

    int numbers[n];

    for(int i = 0; i < n; i++) {
        cin >> x;
        numbers[i] = x;
    }

    cout << "Even: ";
    for(int i = 0; i < n; i++) {
        if(numbers[i]%2 == 0) {
            cout << numbers[i] << " ";
        }
    }

    cout << endl;

    cout << "Odd: ";
    for(int i = 0; i < n; i++) {
        if(numbers[i]%2 != 0) {
            cout << numbers[i] << " ";
        }
    }


    return 0;
}
