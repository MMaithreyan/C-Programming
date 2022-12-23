#include <iostream>
using namespace std;

class bank{
    protected:
        int balance;

    public:
    int atm(int temp){
        balance = temp;
        return balance;
    }
};

int main(){
    bank obj;
    // obj.setbal(7000);
    cout << obj.atm(7000);
};