#include<iostream>
using namespace std;


int number(double a, int x) {
    double sum = a + x;
    return sum;
}

int main(){
    double result;
    result = number(50, 10);

    cout << "result is: " << result << endl;

    return 0;
}