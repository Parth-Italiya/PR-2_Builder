/***************************************************************
 -: Press A to login as administrator or B to login as staff:-
**************************************************************

press a key to go to next page : A

************************************************************
Welcome to administration page :
************************************************************
        Enter The Name Of Bank Staff Member :aman
        Enter The ID of Bank Staff Member :542658
        Enter The Phone Number Of Bank Staff Member :345265
        Enter The Email Address of Bank Staff Member :aman@gmail.com

Successfully Registered! :
***************************************************************

         Name           :aman
         Amount Number  :542658
         Phone Number   :345265
         Email          :aman@gmail.com
*************************************************************


Please select an option:
1. Deposit
2. Withdraw
3. Check Balance
4. Exit

 Option : 1

Enter deposit amount in INR: 10000
10000 INR deposited successfully!


Please select an option:
1. Deposit
2. Withdraw
3. Check Balance
4. Exit

 Option : 2

Enter withdrawal amount 500
500 INR withdrawn successfully!


Please select an option:
1. Deposit
2. Withdraw
3. Check Balance
4. Exit

 Option : 3
Your current balance is 9500INR


Please select an option:
1. Deposit
2. Withdraw
3. Check Balance
4. Exit

 Option : 4

Thank you for using the Bank System!
*/
#include <iostream>
using namespace std;

class Bank {
    private:
    	char pa1, pa2 ;
    	int id_1,phone ;
    	string name,email;
        float balance=0;
    public:
    	
    	Banner(){
			cout<< "\t\t:-YOUR BANK MANGEMENT SYSTEM -: "<< endl;
			cout<<"************************************************************ "<< endl ;
			cout<<endl;
			cout<< "\t\t:- Design And Program by -: "<< endl;
			cout<<"************************************************************ "<< endl;
			cout<<"\t\tParth Italiya" <<endl;
			cout<<endl;
			cout<< "\t\t        :- Trainer -:       "<< endl;
			cout<<"************************************************************ "<< endl;
			cout<<"\t\t\t gaurav sir         "<<endl;
			cout<<endl;
			cout<<endl;
			cout<< "press any key to go to next page : "; cin>>pa1;
			system("cls");
		}
		
		Staff(){
			rep : 
			cout<<"************************************************************** "<< endl;
			cout<<" -: Press A to login as administrator or B to login as staff:-"<<endl;
			cout<<"************************************************************** "<< endl;
			cout<<endl;
			cout<< "press a key to go to next page : "; cin>>pa2;
			
			if(pa2=='A' || pa2=='a')
			{
				cout<<"\n************************************************************" ;
				cout<<"\nWelcome to administration page : ";
				cout<<"\n************************************************************" ;
				cout<< endl;
				cout<< "\tEnter The Name Of Bank Staff Member :" ; cin>>name ;
				cout<< "\tEnter The ID of Bank Staff Member :" ; cin>>id_1 ;
				cout<< "\tEnter The Phone Number Of Bank Staff Member :" ; cin>>phone ;
				cout<< "\tEnter The Email Address of Bank Staff Member :"; cin>>email ;
				
				cout<<"\nSuccessfully Registered! : \n";
				cout<<"***************************************************************"<<endl ;
				cout<< "\n\t Name \t\t:" <<name;
				cout<< "\n\t Amount Number\t:"<<id_1;
				cout<< "\n\t Phone Number \t:"<<phone;
				cout<< "\n\t Email \t\t:"<<email;
				cout<<"\n*************************************************************"<<endl ;
			}
			
			else if(pa2=='B' || pa2=='b')
			{
				cout<<"\n************************************************************" ;
				cout<<"\nWelcome to staff panel : ";
				cout<<"\n************************************************************" ;
				cout<< endl;
				cout<< "\tEnter The Name Of Bank Staff Member :" ; cin>>name ;
				cout<< "\tEnter The ID of Bank Staff Member :" ; cin>>id_1 ;
				cout<< "\tEnter The Phone Number Of Bank Staff Member :" ; cin>>phone ;
				cout<< "\tEnter The Email Address of Bank Staff Member :"; cin>>email ;
				
				cout<<"\nSuccessfully Registered! : \n";
				cout<<"***************************************************************"<<endl ;
				cout<< "\n\t Name \t\t:" <<name;
				cout<< "\n\t Amount Number\t:"<<id_1;
				cout<< "\n\t Phone Number \t:"<<phone;
				cout<< "\n\t Email \t\t:"<<email;
				cout<<"\n*************************************************************"<<endl ;
			}
			else 
			{
				cout<<"\nInvalid Input!\n\n";
				goto rep;
			}
			
		}
        void deposit(float amount) {
            balance += amount;
            cout << amount << " INR deposited successfully!" << endl;
        }
        void withdraw(float amount) {
            if (amount > balance) {
                cout << "Insufficient balance. Withdrawal failed." << endl;
            } else {
                balance -= amount;
                cout << amount << " INR withdrawn successfully!" << endl;
            }
        }
        void display() {
            cout << "Your current balance is " << balance <<"INR"<<  endl;
        }
};

int main() {
    Bank customer;
    int choice;
    float amount;

	customer.Banner();
	customer.Staff();
	
    while (true) {
        cout << "\n\nPlease select an option:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "\n Option : ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\nEnter deposit amount in INR: ";
                cin >> amount;
                customer.deposit(amount);
                break;
                
            case 2:
                cout << "\nEnter withdrawal amount ";
                cin >> amount;
                customer.withdraw(amount);
                break;
                
            case 3:
                customer.display();
                break;
                
            case 4:
                cout << "\nThank you for using the Bank System!" << endl;
                exit(0);
                
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
return 0;
}
