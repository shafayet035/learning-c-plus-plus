#include <iostream>
using namespace std;

int main() {
    int phy, chem, bio, math, comp;

    cout << "Physics Number: ";
    cin >> phy;

    cout << "Chemistry Number: ";
    cin >> chem;

    cout << "Biology Number: ";
    cin >> bio;

    cout << "Math Number: ";
    cin >> math;

    cout << "computer studies Number: ";
    cin >> comp;


    float percentage;
    percentage = (phy + chem + bio + math + comp) / 5.0;

    cout << percentage;

    if(percentage >= 90)
    {
       cout << "Grade A" ;
    }
    else if(percentage >= 80)
    {
       cout << "Grade B";
    }
    else if(percentage >= 70)
    {
        cout <<"Grade C" ;
    }
    else if(percentage >= 60)
    {
        cout << "Grade D" ;
    }
    else if(percentage >= 40)
    {
       cout << "Grade E";
    }
    else
    {
       cout << "Grade F";
    }


    return 0;
}
