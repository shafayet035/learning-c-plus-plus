#include<iostream>
using namespace std;

int main() {

    int mark1, mark2, mark3, mark4, mark5, totalMarks, maximumMark=200;
    float percentage;

    cout << "Please enter mark1: ";
    cin >> mark1;

    cout << "Please enter mark2: ";
    cin >> mark2;

    cout << "Please enter mark3: ";
    cin >> mark3;

    cout << "Please enter mark4: ";
    cin >> mark4;

    cout << "Please enter mark5: ";
    cin >> mark5;

    totalMarks = mark1 + mark2 + mark3 + mark4 + mark5;

    percentage =  (totalMarks / (5.0 * maximumMark)) * 100;


    cout << "The percentage mark is: " << percentage << "%";

    return 0;
}
