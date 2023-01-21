#include <iostream>

using namespace std;
class account{
	private:
	 string accno;
	 string acctitle;
	 double amount;
	 char acctype;
	 public:
	  account(string acno,string title,double amounts,char accounttype){
	 	accno=acno;
	 	acctitle=title;
	 	amount=amounts;
	 	acctype=accounttype;
	 	
		 }
	 		void deposite(){
	 			cout<<"depositing 1000rs to the account=";
	 			amount=amount+1000;
	 			cout<<amount<<endl;
		 }
		 void withdraw(){
double with;
		 	cout<<"withdraw amount you want";
		 	cin>>with;
		 	amount=amount-with;
		 	cout<<"your remaining amount is="<<amount<<endl;
			 }
		 void changetype(){
		 	char value;
		 	cout<<"Enter 's' for Saving acount,'c' for current account, 'd' for deposite account=";
		 	cin>>value;
		 	switch (value){
			 case 's':
			 cout<<"your account is saving";
			 break;
			 case 'c':
			 cout<<"your account is current acount";
			 break;
			 case 'd':
			 cout<<"your account is deposite";
			 break;
			 default:
			 cout<<"enter valid value";
			 cin>>value;
			 }
		 	
		 }
		 double check_balance(){
		 
		 cout<<"your remaing amount is"<<amount<<endl;
		 		
		 }
		 void displayaccouninfo(){
		 }
		 
};

int main() {
	account a("iosjadfnlakd2133","osama",540000,'s');
		a.deposite();
		a.withdraw();
		a.check_balance();
		a.changetype();
	return 0;
}