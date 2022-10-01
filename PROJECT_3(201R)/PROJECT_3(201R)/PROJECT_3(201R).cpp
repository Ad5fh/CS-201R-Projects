//My name is Aissatou Diallo and my class section is 0002. The program below is our program 3 named: "KC Bank Accounts" .


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;
int const number = 10;
string array[number];
char choice;
string firstname[number], lastname[number];
int ID[number];
double savings[number], checkings[number], total[number];
double GrandTotal;



void printCustomersData() {

    string array[number];
    int count = 0;
    string line;
    int i = 0;
    fstream fin("input.txt");
    if (fin.fail()) {
        cout << "Input file failed to open." << endl;
        exit(1);
    }
    while (!fin.eof()) {
        cout  << "Last " <<  "          " << "First " << "         " << "ID " << "            " << "Savings Account "  << "Checking Account" << endl;
        for (int i = 0; i < number; i++) {
            fin >> ID[i] >> firstname[i] >> lastname[i] >> savings[i] >> checkings[i];
            cout << left << setw(15) << lastname[i] << left << setw(15) << firstname[i] << left << setw(15) << ID[i] << left << setw(15)<< savings[i] <<" " << checkings[i] << endl;

        }
    }

    
    fin.close();
}
void printNames() {
    string array[number];
    int count = 0;
    string line;
    string temp1, temp2;
    int i = 0;
    fstream fin("input.txt");
    if (fin.fail()) {
        cout << "Input file failed to open." << endl;
        exit(1);
    }
    while (!fin.eof()) {
        cout << "First " << "          " << "Last " << endl;
        for (int i = 0; i < number; i++) {
            fin >> ID[i] >> firstname[i] >> lastname[i] >> savings[i] >> checkings[i];
        }
         for (int i = 0; i < number; i++) {
            for (int j = 0; j < number; j++) {
                if (firstname[i] < firstname[j]) {
                    temp1 = firstname[j];
                    firstname[j] = firstname[i];
                    firstname[i] = temp1;

                }
            }

        }
        for (int i = 0; i < 10; i++) {
            cout << setw(15) << left << firstname[i] << setw(15) << left << lastname[i] << endl;

        }
    
    


       
    }
    fin.close();
}

void printBankTotal() {
    int i = 0;
    int j = 0;
    fstream fin("input.txt");
    if (fin.fail()) {
        cout << "Input file failed to open." << endl;
        exit(1);
    }
    while (!fin.eof()) {
        cout << endl;
        cout << "ID " << "            " << "Savings Account " << "Checking Account" << " Total" << endl;
        for (int i = 0; i < number; i++) {
            fin >> ID[i] >> firstname[i] >> lastname[i] >> savings[i] >> checkings[i];
            total[i] = savings[i] + checkings[i];

            cout << left << setw(15) << ID[i] << left << setw(15)  << savings[i] <<" "<< left << setw(15) << checkings[i] << "  " << left << setw(15) << total[i] << endl;
            GrandTotal += total[i];
        }       
    }
        fin.close();
}





int main()
{
    string firstname[number], First;
    string Last, lastname[number];
    fstream fin("input.txt");
    int i=0;
    
    
    while (1) {
        cout << "1. Print customer information " << endl;
        cout << "2. Print names and IDs" << endl;
        cout << "3. Print accounts total" << endl;
        cout << "4. Enter q/Q to quit:" << endl;
        cout << endl;
        cout << "Enter your choice, or 'q' to quit: ";
        cin >> choice;
        switch (choice) {

        case '1':
            cout << endl;
            printCustomersData();
            cout << endl;
            break;
        case'2':
            cout << endl;
            printNames();
            cout << endl;
            cout << "*******************************" << endl;
            cout << "Total Number Of Customers is "<< number << endl;
            cout << "*******************************" << endl;
            cout << endl;
            break;
        case'3':
            cout << endl;
            printBankTotal();
            cout << endl;
            cout << "********************************" << endl;
            cout << "The Bank total amount is " << GrandTotal << endl;
            cout << "********************************" << endl;
            cout << endl;
            break;
        case'4':
        case'q':
        case'Q':
            cout << endl;
            cout << "Thanks for using my program. GoodBye!!" << endl;
            exit(1);
            break;
        default:
            cout << endl;
            cout << "Wrong input. Try again..." << endl;
            cout << endl;
        }
    }

    return 0;
}

