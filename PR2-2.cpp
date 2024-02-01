#include<iostream>
using namespace std;

class Supermarket {
private:
    int super_id;
    int super_pass;
    int super_num;
    int super_item;
    int super_quntity;
    int super_price;
    int super_discount;

public:

    Supermarket() {
        cout << "\tEnter ID number:";
        cin >> this->super_id;
        cout << "\tEnter PASS :";
        cin >> this->super_pass;
        cout << "ID & PASSWORD IS VERIFIED" << endl;
        cout << "\tEnter PRODUCT NUMBER:";
        cin >> this->super_num;
        cout << "\tEnter item number:";
        cin >> this->super_item;
        cout << "\tEnter quantity number:";
        cin >> this->super_quntity;
        cout << "\tEnter price number:";
        cin >> this->super_price;
        cout << "\tEnter discount number:";
        cin >> this->super_discount;
    }

    Supermarket() {
        cout << "Your bill is ready\n" << endl;
    }
};

int main() {
    Supermarket s; 
	s.Supermarket();

    return 0;
}

