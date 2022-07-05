#include <iostream>

using namespace std;

int main(){
    int year;
    cin >> year;

   switch(( year%4 == 0 )&&(( year%400==0 )||( year%100 !=0 ))){
        case 1:
           cout << "Leap Year." ;
            break;

        case 0:
            cout << "Not Leap Year." ;
            break;

        default:
            cout << "Invalid year";
            break;
   }


    return 0;

}
