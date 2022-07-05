#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    if(a >= 1000 && b <= 9999) {
        for(int i = a; i <= b; i++) {
           if(i%4 != 0) {
            cout << i << " ";
           }
        }
    }


   return 0;
}
