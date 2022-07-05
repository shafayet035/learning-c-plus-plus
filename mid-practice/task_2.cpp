#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Give n: ";
    cin >> n;

    int sum = 0, x;

    for(int i = 1; i <= n; i++) {
        cout << "Enter a value: ";
        cin >> x;
        sum = sum + x;
    }

    cout << sum;


    return 0;
}
