#include <iostream>
using namespace std;
class bankAccount
{
    string accountName;
    int balance;
    void getData()
    {
        cout << "Enter Account Name ";
        cin >> accountName;
        cout << "Enter balance ";
        cin >> balance;
    }
    friend void friendFunction(bankAccount &obj) {
        obj.getData();
    }

public:
    string getAccountName()
    {
        return accountName;
    }
    int getBalance()
    {
        return balance;
    }
};
int main()
{
    bankAccount obj;
    friendFunction(obj);
    cout << "Account name = " << obj.getAccountName()<<"\n";
    cout << "Balance = " << obj.getBalance();
}
