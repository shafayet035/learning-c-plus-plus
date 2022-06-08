#include<iostream>
#include<cmath>
using namespace std;

int main() {

    float r, pi=3.14;

    cout << "Please enter the radius of the circle: ";
    cin >> r;

    float area = pi*r*r;


    cout << "The area of the circle is: " << area;

    return 0;
}
