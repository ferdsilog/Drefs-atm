#include <iostream>
using namespace std;

int main () {
	int pin=123456, balance=0, deposit, withdraw, answer, select, attempt=3;
	char transaction;
	
	cout <<"Welcome to Dref's ATM"<<endl;
	cout <<endl;
	
do{
	cout <<"Enter Pin: ";
	cin >>answer;
	
	if (answer==pin) {
		do{
		cout <<endl;
		cout <<"Transactions"<<endl;
		cout <<endl;
		cout <<"1. Check Balance"<<endl;
		cout <<"2. Deposit"<<endl;
		cout <<"3. Withdraw"<<endl;
		cout <<"4. Exit"<<endl;
		cout <<endl;
		cout <<"Select Transaction: ";
		cin >> select;
		
		if (select==1){
			cout <<"Remaining Balance: "<<balance;
		} else if (select==2){
			cout <<"Enter Amount:";
			cin >>deposit;
			balance+=deposit;
		} else if (select==3){
			cout <<"Enter Amount:";
			cin >>withdraw;
			if (withdraw>balance) {
				cout <<"Insufficient Balance!";
			} else {
				balance-=withdraw;
			}
		}
	 	else if (select==4){
			cout <<"Thank you for using Dref's ATM!";
			break;
		} 
		  	cout <<endl;
			cout <<"You want another transaction? (Y/N)"<<endl;
			cin >> transaction;
		}while (transaction=='Y'||transaction=='y');
		   cout <<endl<<"Have a great day!";
	} 
	else {
		attempt--;
		cout <<"Invalid Pin!"<<endl;
		cout <<"Attempts remaining:"<<attempt<<endl;
		cout <<endl;
	} 
	if (attempt==0) {
		cout <<"Your account has temporarily closed"<<endl;
		break;
	}		
}while (answer!=pin);
	
		
	
	
	return 0;
}
