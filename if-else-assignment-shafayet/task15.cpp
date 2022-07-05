#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;
    cout << "triangles three sides: ";
    cin >> side1 >> side2 >> side3;

    if((side1 + side2) > side3 && (side2 + side3) > side1 && (side1 + side3) > side2) {
        cout << "Triangle is Valid";
    } else {
        cout << "Triangle is not valid";
    }


    return 0;
}
