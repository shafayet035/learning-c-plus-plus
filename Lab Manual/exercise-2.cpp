#include<iostream>
using namespace std;

class student {
    public: 
        string name;

    private:
        string roll;
        int b_year;
    
    public:
        void setValues(string r, int y) {
            roll = r;
            b_year = y;
        }

        int calculateAge() {
            int age;
            age = 2022 - b_year;

            return age;
        }
      
};


int main(){
    int result;

    student S1;
    S1.name = "Mr.Bean";
    S1.setValues("22-4899-2", 2002);
    result = S1.calculateAge();

    cout << S1.name << "'s age is: " << result << endl;

    student S2;
    S2.name = "Charlie Chapline";
    S2.setValues("22-4898-2", 1995);
    result = S2.calculateAge();

    cout << S2.name << "'s age is: " << result << endl;

    return 0;
}