#include <iostream>

using namespace std;

class savingaccount {
private:
    double monthly_interest;
    static double annual_Interest_Rate;
    int saving_balance;

public:
    savingaccount(int deposit, double interest) {
        this->saving_balance = deposit;
        annual_Interest_Rate = interest;
    }

    void setmonthly_interest() {
        monthly_interest = (saving_balance * annual_Interest_Rate) / 12;
    }

    void display() {
        cout << "Monthly interest rate at " << annual_Interest_Rate << " is " << monthly_interest << endl;
    }

    static void modifyInterestRate() {
       annual_Interest_Rate = annual_Interest_Rate ;
    }
};

double savingaccount::annual_Interest_Rate = 0.0;

int main() {
    savingaccount s1(2000, 0.04);
    s1.setmonthly_interest();
    s1.display();

    savingaccount s2(4000, 0.05);
    s2.setmonthly_interest();
    s2.display();

    return 0;
}
