// 2. Create a class BankAccount:
// 	•	Deposit money
// 	•	Withdraw money
// 	•	Display balance

#include <iostream>
using namespace std;

class bankaccount
{
private:
           double balance;

public:
           int dm;
           int wm;

           bankaccount(int d , int w, double b){
                      this->dm = d;
                      this->wm = w;
                      this->balance = b;
                      cout<<"deposit money : "<<dm<<endl;
                      cout << "withdrow money : " << wm <<endl;
                      cout << "balance : "<< balance <<endl;

           }
};
int main(){
           bankaccount a(200,300,1500);
}