#include <iostream>
using namespace std;

class BankAccount {
	private:
		double balance;
	public:	
		void setBalance( double balance)
		{
			if(balance>0)
			this->balance = balance;
			else
			cout<<"please enter valid balance\n";
		}
		
		double getBalance(){
			return balance;
		}
};

int main() {
	BankAccount acc;
	double balance;
	cout<<"Enter your depost amount\n";
	cin>> balance;
	acc.setBalance(balance);
	cout<< "Your current balance is : "<< acc.getBalance();
	return 0;
}