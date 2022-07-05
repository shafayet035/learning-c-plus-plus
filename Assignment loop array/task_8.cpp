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

    int even[] = {}, odd[] = {};

    int l = 0;
    for(int i = 0; i < n; i++) {
        if(numbers[i]%2 == 0) {
            even[l] = numbers[i];
        }
        l++;
    }

    int t = 0;
    for(int i = 0; i < n; i++) {
        if(numbers[i]%2 != 0) {
        odd[t] = numbers[i];
        t++;
        }
    }

    int evenSize =  sizeof(even)/sizeof(even[0]);
    int oddSize =  sizeof(even)/sizeof(even[0]);

    cout << evenSize << endl ;
    cout << oddSize << endl ;

    cout << "even: ";
    for(int i = 0; i < evenSize; i++) {
        cout << even[i] << " ";
    }

    cout << endl;

    cout << "odd: ";

    for(int i = 0; i < oddSize; i++) {
        cout << odd[i] << " ";
    }



    return 0;
}
