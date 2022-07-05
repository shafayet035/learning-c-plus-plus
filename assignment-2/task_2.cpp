#include<iostream>
using namespace std;

int main () {
    
    int n, sum = 0;

    

    cout << "Please enter a range: ";
    cin >> n;

    int numbers[n];

    for(int i = 0; i < n; i++) {
        cout << "Enter a Number: ";
        cin >> numbers[i];
    }

    for(int i = 0; i < n; i++) {
        sum = sum + numbers[i];
    }

    cout << sum;
    

    return 0;
}