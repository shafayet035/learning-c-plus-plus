#include <iostream>

using namespace std;

int main(){

   int a, b;


    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;


    switch(a > b)
    {
        case 0: cout <<"a is Maximum";
            break;

        case 1: cout<<"b is Maximum";
            break;
    }

    return 0;

}
