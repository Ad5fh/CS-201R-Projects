//My name is Aissatou Diallo and my class section is 0002. This is our project 2 named "Take it or Leave it" which is due on 02/22/2022.
//I started working on it from 02/17/2022. Below is the main program but i put the declaration of the functions i used in the "Header.h" file and 
//my functions can be found in "Functions.cpp" file.


#include <iostream>
#include<vector>
#include <cstdlib>
#include <time.h>
#include"Header.h"
using namespace std;

int main() {   
    char choice;
    while (1) {
        do {
            int num;
            int currentScore = 0;
            cout << "current Score: " << currentScore << endl;
            cout << "Dead Cards: ";
            Dead();
            cout << "Live Cards: ";
            liveCards();
            cout << endl;
            cout << "Next Card: ";
            num = next();
            cout << endl;
            cout << "Take it [T} or Leave it [L]? ";
            cin >> choice;
            if (num != 0) {
                if ((choice == 'L') || (choice == 'l')) {
                    l_choice(num);
                }
                else if ((choice == 'T') || (choice == 't')) {
                    t_choice(num);
                }
                else {
                    cout << "Error!! You entered a wrong choice. Try Again!" << endl;
                    cout << endl;
                    cout << "Take it [T} or Leave it [L]? ";
                    cin >> choice;
                }
            }
        } while (!End_Game());
        cout << endl;
        cout << "Do you want to play Again ? Yes [Y] or No [N] ?";
        cin >> choice;
            if ((choice == 'N') || (choice == 'n')) {
                break;
            }
            else{
                continue;
            }        
    }                    
    return 0;
}
        
        
    
    
   

