#include<iostream>
#include<cmath>
using namespace std;

class line {
    double x1, x2, y1, y2;

public:
    void setValues(double a, double b, double c, double d) {
        x1 = a;
        y1 = b;
        x2 = c;
        y2 = d;
    }

    double length() {
        double x = x1 - x2;
        double y = y1 - y2;

        x = pow(x, 2);
        y = pow(y, 2);

        double result = x + y;

        result = sqrt(result);

        return result;
    }

};

int main(){
    double a,b,c,d;
    cin >> a >> b >> c >> d;

    line L1;
    L1.setValues(a, b, c, d);

    double result;
    result = L1.length();
    cout << "The Result is: " << result << endl;

    return 0;
}