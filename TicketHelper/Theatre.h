#pragma once
#include <vector>
#include <string>
#include "Event.h"
#include <sstream>

using namespace std;
public struct Adress
{
	int number;
	string street;
	string city;
public :
	Adress(){}
	Adress(int number ,string street, string city){
		this->number = number;
		this->street = street;
		this->city = city;
	}
	string ToString() {
		ostringstream converter;
		converter << number;
		string a = city + " city, " + street + " street, " + converter.str();
		return a;
	}
};
public class Theatre
{
public:
	string theatreName;
	Adress adress;
	vector<Event> events;
	Theatre(){};
	Theatre(string theatreName, Adress adress, vector<Event> events){
		this->theatreName = theatreName;
		this->adress = adress;
		this->events = events;
		for (int i = 0; i < events.size(); i++)
		{
			events[i].theatreName = this->theatreName;
		}
	};
	~Theatre(){};

};

