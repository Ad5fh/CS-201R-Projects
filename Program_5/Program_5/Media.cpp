#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Media.h"

using namespace std;

Media::Media()
{
	id = "";
	name = "";
	second = 0;
}

Media::Media(string id, string name, int second)
{
	this->id = id;
	this->name = name;
	this->second = second;
}
string Media::getID()
{
	return id;
}
string Media::getName()
{
	return name;
}
void Media::setName(string name)
{
	this->name = name;
}
int Media::getSecond()
{
	return second;
}
void Media::setSecond(int second)
{
	this->second = second;
}
void Media::setID(string id)
{
	this->id = id;
}
Audio::Audio() :Media()
{
	sound = "";
	MediaFormat = "";
}
Audio::Audio(string id, string name, int second, string sound, string MediaFormat) :
	Media(id, name, second)
{
	this->sound = sound;
	this->MediaFormat = MediaFormat;
}
string Audio::getSound()
{
	return sound;
}
void Audio::setSound(string sound)
{
	this->sound = sound;
}
string Audio::getMediaFormat()
{
	return MediaFormat;
}
void Audio::setMediaFormat(string MediaFormat)
{
	this->MediaFormat = MediaFormat;
}
string Audio::getType() const
{
	return "Audio";
}
void Audio::ReadData(ifstream& input)
{
	string newLine;
	string id;
	string name;
	int sec;

	getline(input, id);
	getline(input, name);
	input >> sec>>sound;
	getline(input, newLine);
	getline(input, MediaFormat);
	setID(id);
	setName(name);
	setSecond(sec);
}
void Audio::WriteData(ofstream& output)
{
	output << getID() << endl << getName() << endl << getSecond() << endl << sound << endl << MediaFormat << endl;
	output << "***************************************" << endl;
}
Video::Video() :Audio()
{
	pixel = "";
}
Video::Video(string id, string name, int second, string pixel, string sound, string MediaFormat) :
	Audio(id, name, second, sound, MediaFormat)
{
	this->pixel = pixel;
}
string Video::getPixel()
{
	return pixel;
}
void Video::setPixel(string pixel)
{
	this->pixel = pixel;
}
string Video::getType() const
{
	return "Video";
}
void Video::ReadData(ifstream& input)
{
	string newLine;
	string id;
	string name;
	string pi;
	string format;
	string so;
	int sec;
	getline(input, id);
	getline(input, name);
	input >> sec >> pi >> so;
	getline(input, newLine);
	getline(input, format);
	setID(id);
	setName(name);
	setSecond(sec);
	setSound(so);
	setPixel(pi);
	setMediaFormat(format);
}
void Video::WriteData(ofstream& output)
{
	output << getID() << endl << getName() << endl << getSecond() << endl << getPixel() << endl << getSound()
		<< endl << getMediaFormat() << endl;
	output << "***************************************" << endl;
}