#include <iostream>
using namespace std;

int main() {
    int angle1, angle2, angle3, sum;
    cout << "please three angle: ";
    cin >> angle1 >> angle2 >> angle3;

    sum = angle1 + angle2 + angle3;

    if(sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
       cout <<  "Triangle is valid." ;
    }else {
       cout << "Triangle is not valid." ;
    }

    return 0;
}
