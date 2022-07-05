#include <iostream>
using namespace std;

int main() {
 int side1, side2, side3;
    cout << "triangles three sides: ";
    cin >> side1 >> side2 >> side3;

    if(side1==side2 && side2==side3){
        cout << "Equilateral triangle." ;
    }
    else if(side1==side2 || side1==side3 || side2==side3) {

        cout << "Isosceles triangle." ;
    }
    else {
       cout << "Scalene triangle." ;
    }

    return 0;
}
