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

    int m, z;
    cin >> m;

    int numbers2[m];

    for(int i = 0; i < m; i++) {
        cin >> z;
        numbers2[i] = z;
    }


    for(int i = 0; i < m; i++) {

        for(int j = 0; j < n; j++) {
             int q;
             q = numbers2[i]*numbers[j] ;
             cout << setw(4) <<  q << " ";
        }
        cout << endl;
    }


    return 0;
}
