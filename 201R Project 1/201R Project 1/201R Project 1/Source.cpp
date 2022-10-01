//My name is Aissatou Diallo and my class section is 0002. 
//And below is the first program (program 1) which is a program for KC Cookies store. 
//This program was written by me on February 05 2022 and it's due on February 06 2022.

#include <iostream>
using namespace std;

int main () {
	const double Pack4Cookies = 13.20;
	const double Pack6Cookies = 19.49;
	const double PackParty = 34.08;
	char order;
	int choice = 0;
	int numPacks1 = 0;
	int numPacks2 = 0;
	int numPacks3 = 0;
	double total;
	cout << "Welcome to KC Cookies" << endl;
	cout << "We offer 3 different packs of Cookies" << endl;
	cout << "4 Pack Box       $13.20" << endl;
	cout << "6 Pack Box       $19.49" << endl;
	cout << "Party Box '12'   $13.20" << endl;
	cout << endl;
	
	while (true) {
		cout << "What would you like to order today" << endl;
		cout << "1 ==> 4-Pack Cookies" << endl;
		cout << "2 ==> 6-Pack Cookies" << endl;
		cout << "3 ==> Party Box(12-Pack Cookies)" << endl;
		cout << "Please enter '1 or 2 or 3' to proceed:" << endl;
		cin >> choice;
		cout << endl;
		if (choice == 1) {
			cout << "How many packs do you want?" << endl;
			cin >> numPacks1;
			cout << endl;
			cout << "You ordered:" << numPacks1 << " 4-Pack Cookies" << endl;
			cout << "Do you want to add anything else?Y/y or N/n" << endl;
			cin >> order;
			cout << endl;
			if ((order == 'Y') || (order == 'y')) {
				continue;
			}
			else if ((order == 'N') || (order == 'n')) {
				total = (numPacks1 * Pack4Cookies) + (numPacks2 * Pack6Cookies) + (numPacks3 * PackParty);
				cout << "Total of your order is $ " << total << endl;
				break;
			}
		}
		else if (choice == 2) {
			cout << "How many packs do you want?" << endl;
			cin >> numPacks2;
			cout << endl;
			cout << "You ordered:" << numPacks2 << "6-Pack Cookies";
			cout << "Do you want to add anything else?Y/y or N/n";
			cin >> order;
			cout << endl;
			if ((order == 'Y') || (order == 'y')) {
				continue;
			}
			else if ((order == 'N') || (order == 'n')) {
				total = (numPacks1 * Pack4Cookies) + (numPacks2 * Pack6Cookies) + (numPacks3 * PackParty);
				cout << "Total of your order is $ " << total << endl;
				break;
			}
		}
		else if (choice == 3) {
			cout << "How many packs do you want?" << endl;
			cin >> numPacks3;
			cout << endl;
			cout << "You ordered:" << numPacks3 << " Party Pack Cookies" << endl;
			cout << "Do you want to add anything else?Y/y or N/n" << endl;
			cin >> order;
			cout << endl;
			if ((order == 'Y') || (order == 'y')) {
				continue;
			}
			else if ((order == 'N') || (order == 'n')) {
				total = (numPacks1 * Pack4Cookies) + (numPacks2 * Pack6Cookies) + (numPacks3 * PackParty);
				cout << "Total of your order is $ " << total << endl;
				break;
			}
		}
		else {
			cout << "Error! Try again." << endl;
			continue;
		}
		
	
    
	
	}
	











	return 0;
}