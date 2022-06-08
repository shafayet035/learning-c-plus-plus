#include <iostream>
using namespace std;

int main() {

    int phy, chem, bio, math, com, sum;
    float avg;

    cout << "Physics Number: ";
    cin >> phy;

    cout << "Chemistry Number: ";
    cin >> chem;

    cout << "Biology Number: ";
    cin >> bio;

    cout << "Math Number: ";
    cin >> math;

    cout << "Computer Number: ";
    cin >> com;

    sum = phy + chem + bio + math + com;

    avg = sum / 5;

    if(avg >= 90) {
        cout << "Your Grade is A";
    }
    else if(avg >= 80) {
        cout << "Your Grade is B";
    }
       else if(avg >= 70) {
        cout << "Your Grade is C";
    }
       else if(avg >= 60) {
        cout << "Your Grade is D";
    }
       else if(avg >= 40) {
        cout << "Your Grade is E";
    }
       else  {
        cout << "Your Grade is F";
    }




    return 0;

}

