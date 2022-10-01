#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

class Media
{
public:
	Media();
	Media(string id, string name, int second);
	string getID();
	string getName();
	int getSecond();
	void setID(string id);
	void setName(string name);
	void setSecond(int second);
	virtual string getType() const = 0;
	virtual void ReadData(ifstream&) = 0;
	virtual void WriteData(ofstream&) = 0;
protected:
	string id;
	string name;
	int second;
};
class Audio :public Media
{
	string sound;
	string MediaFormat;
public:
	Audio();
	Audio(string id, string name, int second, string sound, string MediaFormat);
	string getSound();
	string getMediaFormat();
	void setSound(string sound);
	void setMediaFormat(string MediaFormat);
	string getType() const;
	void ReadData(ifstream& input);
	void WriteData(ofstream& output);
};
class Video :public Audio
{
public:
	Video();
	Video(string id, string name, int second, string pixel, string sound, string MediaFormat);
	string getPixel();
	void setPixel(string pixel);
	string getType() const;
	void ReadData(ifstream& input);
	void WriteData(ofstream& output);
protected:
	string pixel;
};


