#include<iostream>
using namespace std;

int main() {

    int n, x;
    cin >> n;
    int numbers[n];

    for(int i = 0; i < n; i++) {
        cin >> x;
        numbers[i] = x;
    }

    int maxn = numbers[0], minn = numbers[0];
    int sum;
    float avg;
    for(int i = 0; i < n; i++) {
        if(numbers[i] > maxn ) {
            maxn = numbers[i];
        }

        if(numbers[i] < minn) {
            minn = numbers[i];
        }

        sum = sum + numbers[i];

    }

    avg = float(sum)/n;

    cout << maxn << endl;
    cout << minn << endl;
    cout << avg << endl;

    return 0;
}
