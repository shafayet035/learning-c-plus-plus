#include <iostream>

using namespace std;

int main(){

   int a, b, c;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    cout<<"Enter c: ";
    cin>>c;


    switch(a > b)
    {
        case 1:
            switch(a > c) {
            case 1:
                cout <<"a is Maximum";
                break;
            case 0:
                cout << "c is maximum";
            }
            break;

        case 0:
            switch(b > c) {
            case 1:
                cout <<"b is Maximum";
                break;
            case 0:
                cout << "c is maximum";
            }
            break;
    }

    return 0;

}
