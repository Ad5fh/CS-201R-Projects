#include <iostream>
#include <cstdlib>
#include <time.h>
#include<vector>
using namespace std;


int liveCard[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
int deadCards[16] = {};
int currentScore = 0;




void liveCards() {
    for (int i = 0; i < 16; i++) {
        if (liveCard[i] > 0) {
            cout << liveCard[i] << " ";
        }
    }
    cout << endl;
}

int checking(int num) {

    for (int i = 0; i < 16; i++) {
        if (deadCards[i] == num) {
            return 1;
        }
    }
    return 0;
}
int next() {
    srand(time(NULL));
    int num;
    num = rand() % 16 + 1;
    if (checking(num)) {

        cout << num << " Dead" << endl;
        return 0;
    }

    else {
        cout << num << endl;
        return num;
    }

}
void Dead() {
    for (int i = 0; i < 16; i++) {
        if (deadCards[i] > 0) {
            cout << deadCards[i] << " ";
        }
    }
    cout << endl;
}

void l_choice(int n) {
    deadCards[n - 1] = n;
    liveCard[n - 1] = 0;

}

void t_choice(int n) {
    currentScore = currentScore + n;
    for (int i = 0; i < n; i++) {
        deadCards[i] = i + 1;
        liveCard[i] = 0;
        if (liveCard[i] = 0) {
            break;
        }
    }
}

int End_Game() {
    int global = 0;
    for (int i = 0; i < 16; i++) {
        if (deadCards[i] > 0) {
            global++;
        }
    }
    return global == 16;
}