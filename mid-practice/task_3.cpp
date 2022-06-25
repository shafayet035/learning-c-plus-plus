#include<iostream>
using namespace std;

int main() {

    int x;
    int sum;

    do {
        cin >> x;
        sum = sum + x;
    } while(x != 0);

    cout << sum;

    return 0;
}
