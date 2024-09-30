#include <iostream>

using namespace std;

class bank
{
    private:
    string name_of_the_depositor;
    int Account_number;
    string type_of_account;
    double balance_ammount;
    int withdrawl;
    int Deposit_ammount;

    public:
    void setName_of_the_depositor( string name){
        name_of_the_depositor = name;
    }
    void setAccount_number(int ac){
        Account_number = ac;
    }
    void setType_of_account(string type){
        type_of_account  = type;
    }
    void setBalance_ammount(double ammount){    
    balance_ammount = ammount;  
    }
    void setwithdrawl(int withdraw_ammount,double balance){
        if(withdraw_ammount > balance)
            cout << "not possible";
        else
        balance = balance - withdraw_ammount;
    }
    void setDeposit_ammount(int deposit , int ammount){ 
        balance_ammount = ammount + deposit ;
     }
   
    string getName_of_the_depositor(){
        return name_of_the_depositor;
    }
    int getAccount_number(){
        return Account_number;
    }
    string getType_of_account(){
        return type_of_account;
    }
    double getBalance_ammount(){
        return balance_ammount ;
    }
    int getDeposit_ammount(){
        return  balance_ammount;
    }
    int getwithdrawl(){
        return balance_ammount;
    }
}; 
int main()
{
    bank b1;
    string name;
    int ac;
    string type;
    double ammount,withdraw_ammount;
    int choose,deposit;

    cout <<"name :- " << endl;
    cin >> name;
    b1.setName_of_the_depositor(name);

    cout << "account number" << endl;
    cin >> ac;
    b1.setAccount_number(ac);

    cout << "type " <<endl << "1. current" <<endl << "2.saving" << endl;
    cin >> type;
    b1.setType_of_account(type);

    cout << "bank balance :- ";
    cin >> ammount;
    b1.setBalance_ammount(ammount);

    cout << " enter the operation number you want to perform" << endl;
    cout << "1.withdraw " << endl << "2.bank balance" << endl << "3. deposit" << endl;
    cin >> choose;
    switch(choose)
    {
       case 1:
       cout << "enter the amount to withdraw";
       cin >> withdraw_ammount;
       b1.setwithdrawl(withdraw_ammount,ammount);
       cout << "remaining balance  " << b1.getwithdrawl() ;
       break;
       case 2:
       cout << "bank balance " << b1.getBalance_ammount();
       break;
       case 3:
       cout << " deposit :-" ;
       cin >> deposit;
       b1.setDeposit_ammount( deposit , ammount);
       cout << "bank balance " << b1.getDeposit_ammount();
    }
}
