#include<iostream>
using namespace std;

int main () {

    int n;

    cout << "Enter a number to input N number of inputs: ";
    cin >> n;

    int number[n];

    for(int i = 0; i < n; i++) {
        cout << "Enter a number: ";
        cin >> number[i];
    }

    int p;
    cout << "Enter the P Number: " ;
    cin >> p;

    bool isTrue = false;

    for(int i = 0; i < n; i++) {
        if(number[i] == p) {
            cout << "Yes" << endl;
            isTrue = true;
        }
    }

    if(isTrue == false) {
        cout << "No";
    }

    return 0;
}
