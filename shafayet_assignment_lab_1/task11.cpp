#include<iostream>
using namespace std;

int main() {

    int mark_1, mark_2, mark_3, mark_4, mark_5, totalMarks, maximumMark=200;
    float percentage;

    cout << "Please enter mark1: ";
    cin >> mark_1;

    cout << "Please enter mark2: ";
    cin >> mark_2;

    cout << "Please enter mark3: ";
    cin >> mark_3;

    cout << "Please enter mark4: ";
    cin >> mark_4;

    cout << "Please enter mark5: ";
    cin >> mark_5;

    totalMarks = mark_1 + mark_2 + mark_3 + mark_4 + mark_5;

    percentage =  (totalMarks / (5.0 * maximumMark)) * 100;

    cout << "The percentage mark is: " << percentage << "%";

    return 0;
}
