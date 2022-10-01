//My name is Aissatou Diallo and below you have our Program 5 which use inheritance and polymorphism. 
//This program is due on 4/24/2022.

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Media.h"

using namespace std;
int main()
{
    Media* medias[200];
    int count = 0;
    char type;
    string Line;
    ifstream fin("Program5Data.txt");
    if (fin.fail()) {
        cout << "Input file opening failed" << endl;
        exit(1);
    }
    ofstream fout1("Video.txt");
    if (fout1.fail()) {
        cout << "Output file 1 opening failed" << endl;
        exit(1);
    }
    ofstream fout2("Audio.txt");
    if (fout2.fail()) {
        cout << "Output file 2 opening failed" << endl;
        exit(1);
    }
    while (!fin.eof())
    {
        fin >> type;
        getline(fin, Line);
        switch (type) {
        case 'A':
        case 'a':
            medias[count] = new Audio();
            medias[count]->ReadData(fin);
            medias[count]->WriteData(fout2);
            break;
        case 'V':
        case 'v':
            medias[count] = new Video();
            medias[count]->ReadData(fin);
            medias[count]->WriteData(fout1);
            break;
        default:
            break;
        }
    }
    fin.close();
    fout1.close();
    fout2.close();
    return 0;
}

