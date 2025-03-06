#include<iostream>
using namespace std;
class Bank{
	private:
		char name[20],actype[20];
		int bal,acno;
		//constructor
		public:
		Bank()
		{
			cout<<" Enter Account Holder's Name:"<<endl;
			cin.getline(name,20);
			cout<<" Enter Account Type:"<<endl;
			cin.getline(actype,20);
			cout<<"Enter Account No:"<<endl;
			cin>>acno;
			cout<<"Enter Account opening Balance:"<<endl;
			cin>>bal;
			
		}
		//for deposit Money
		void deposit(int amt)
		{
			bal=bal+amt;
			cout<<"Balance After Deposit :"<<bal<<endl;
			system("pause");
		}
		//for withdraw money
		void withdraw(int amt)
		{
			if(amt>bal)
			cout<<"sorry your balnce is Less Than your withdraw Amount:"<<endl;
			else
			{
				bal=bal-amt;
					cout<<"Balance After Withdraw :"<<bal<<endl;
			system("pause");
			}
		}
		void display()
		{
			cout<<"------Account Details:-------"<<endl;
			cout<<"Account Holder's Name: "<<name<<endl;
			cout<<" Account Type:"<<actype<<endl;
			cout<<"Account No:"<<acno<<endl;
			cout<<" current Balance:"<<bal<<endl;
			system("pause");
		}	
};
int main()
{
	Bank c1;
	int amount,choice;
	do{
		system("cls");
		cout<<"--- Welcome DENA BANK----";
		cout<<"-------Main Menu------"<<endl;
		cout<<"1.Deposit money"<<endl;
		cout<<"2.Withdraw Money"<<endl;
		cout<<"3.Display Account Details"<<endl;
		cout<<"4.Quit"<<endl;
		cout<<"enter any choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
			cout<<"Enter Amount to Deposit:";
			cin>>amount;
			c1.deposit(amount);
			break;
			case 2:
			cout<<"Enter Amount to Withdraw:";
			cin>>amount;
			c1.withdraw(amount);
			break;
			case 3:
			c1.display();
			break;
			case 4:
			exit(0);
			cout<<"Thanku for choose This Bank";
			break;
			default:
			cout<<"invalid choice:";
			
		}
		
	}
	while(1);
	
}
