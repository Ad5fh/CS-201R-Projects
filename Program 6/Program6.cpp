/*My name is Aissatou Diallo, and below you have our Program 6 which uses Recursion. And this is due on 05/06/2022*/

#include <iostream>

using namespace std;

int recursion(int start_candy, int move_number) {
    if (start_candy == 17) {
        cout << "Searching for a solution within 20 moves...." << endl;
        cout << "Found solution. I have exactly 17 candies, with " << move_number << " moves left." << endl;
        return 0;
    }

    if (start_candy % 2 == 0) {
        if (move_number - 1 > 0) {
            if (recursion(start_candy / 2, move_number - 1) == 0) {
                cout << "Reduce " << start_candy << " by half to get " << start_candy / 2 <<"." << endl;
                return 0;
            }
        }
    }
    if (start_candy % 3 == 0 && start_candy + (start_candy / 3) <= 10000) {
        if (move_number - 1 > 0) {
            if (recursion(start_candy + (start_candy / 3), move_number - 1) == 0) {
                cout << "With " << start_candy << ", add 1/3 to get " << start_candy + (start_candy / 3) << "." << endl;
                return 0;
            }
        }
    }
    if (move_number - 1 > 0 && start_candy + 23 <= 10000) {
        if (recursion(start_candy + 23, move_number - 1) == 0) {
            cout << "With " << start_candy << ", add 23 to get " << start_candy + 23 << "." << endl;
            return 0;
        }
    }
    return 1;
}
int main()
{
    int amount;
    int temp = 0;
    int move = 0;
    char choice;
    while (move == 0) {
        temp = 0;
        while (temp == 0) {
            cout << "How many candies are you starting with? ";
            cin >> amount;
            if (amount > 0 && amount < 10000)
                temp = 1;
            else
                cout << "Number of candies must be greater than 0 and no more than 10000 ";
        }
        if (recursion(amount, 20) == 1) {
            cout << "Searching for a solution within 20 moves...." << endl;
            cout << "No solution found within 20 moves.Sorry." << endl;
        }
        cout << endl << endl;
        cout << "Would you like to try again [Y/N]? ";
        cin >> choice;
        if (tolower(choice) == 'n')
            move = 1;
    }
    return 0;
}