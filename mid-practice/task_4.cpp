#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Please enter how many inputs you want to give: ";
    cin >> n;

    int numbers[n];

    int x;

    for(int i = 0; i < n; i++) {
        cin >> x;
        numbers[i] = x;
    }

    int p;
    cout << "Enter P: ";
    cin >> p;

    bool isP = false;

    for(int i = 0; i < n; i++) {
        if(numbers[i] == p) {
            cout << "Yes";
            isP = true;
            break;
        }
    }


    if(isP == false) {
        cout << "No";
    }



    return 0;
}
