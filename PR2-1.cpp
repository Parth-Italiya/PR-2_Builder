/*
1. WAP to make Railway Reservation System.
Requirements:
(A) User Input Train Number , Train Name , Source , Destination , Train Time.
(B) Display Record By Search Train Number.
(C) Minimum 3 Input Train Record.
Output:


                                                        -: Railway Riservation system :-

                Enter your name : aman
                From            : surat
                To              : mumbai
                Tiket ID        : 12909


ur registration done.
*/
#include<iostream>
using namespace std;

class railway{
	private:
		char name[100];
		char from[100];
		char to[100];
		int tiket_id;
	public:
	setdata(){
		cout << endl  << endl;
		cout << "							-: Railway Riservation system :- ";
		cout << endl  << endl;
		cout << "		Enter your name : ";
		cin >> this->name;
		cout << "		From 		: ";
		cin >> this->from;
		cout << "		To		: ";
		cin >> this->to;
		cout << "		Tiket ID	        : ";
		cin >> tiket_id;
	}
	getdata(){
		cout << endl  << endl;
		cout << "ur registration done.";
		cout << endl << endl;
	}
	
};

int main (){
	railway r;
	r.setdata();
	r.getdata();
	return 0;
}
