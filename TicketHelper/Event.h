#pragma once
#include <string>

using namespace std;

public struct Time
{
	int hour;
	int minute;
	Time() {}
	Time(int hour, int minute) {
		this->hour = hour;
		this->minute = minute;
	}
};

public struct Date
{
	int day;
	int month;
	int year;
	Time startT, endT;
	Date() {}
	Date(int day, int month, int year, Time startT, Time endT)
	{
		this->day = day;
		this->month = month;
		this->year = year;
		this->startT = startT;
		this->endT = endT;
	}
};

public class Event
{
public:
	string eventName, theatreName;
	int placeCount;
	Date date;
	Event(){};
	Event(string eventName){
		this->eventName = eventName;

	};
	Event(string eventName, int placeCount, Date date){
		this->eventName = eventName;
		this->placeCount = placeCount;
		this->date = date;
	};
	~Event(){};


};


