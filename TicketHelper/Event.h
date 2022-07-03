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
	
	Date() {}
	Date(int day, int month, int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
};

public class Event
{
public:
	string eventName, theatreName;
	int placeCount;
	Date date;
	Time startTime, endTime;
	Event(){};
	Event(string eventName){
		this->eventName = eventName;

	};
	Event(string eventName, int placeCount, Date date, Time startTime, Time endTime){
		this->eventName = eventName;
		this->placeCount = placeCount;
		this->date = date;
		this->startTime = startTime;
		this->endTime = endTime;
	};
	~Event(){};


};


