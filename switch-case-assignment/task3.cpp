#include <iostream>
using namespace std;

int main(){

    int x;
    cin>>x;


    switch (x > 0){
        case 1:
            cout << "the number is positive.";
        break;

        case 0:
            switch (x < 0){
                case 1:
                     cout << "the number is Negative.";
                    break;
                case 0:
                     cout <<"the number is zero.";
                    break;
            }
        break;
    }

    return 0;

}
