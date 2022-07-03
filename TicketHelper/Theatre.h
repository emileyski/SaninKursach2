#pragma once
#include <vector>
#include <string>
#include "Event.h"

using namespace std;
public struct Adress
{
	int nunber;
	string street;
	string city;

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

