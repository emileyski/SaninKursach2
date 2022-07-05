#pragma once
#include <string>
#include <sstream>

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

	string ToString() {
		ostringstream converter; 
		converter << hour;
		string a = (hour < 10) ? "0" + converter.str() : converter.str();
		a += ":";
		converter = ostringstream();
		converter << minute;
		a += (minute < 10) ? "0" + converter.str() : converter.str();
		return a;
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
	string ToString() {
		ostringstream converter; 
		converter << day;
		string a = converter.str();	a += "/";
		converter = ostringstream(); converter << month;
		a += converter.str();	a += "/";
		converter = ostringstream(); converter << year;
		a += converter.str();
		return a;
	}
};

public class Event
{
public:
	string eventName, theatreName;
	Date date;
	Time startTime, endTime;
	Event(){};
	Event(string eventName){
		this->eventName = eventName;

	};
	Event(string eventName, Date date, Time startTime, Time endTime){
		this->eventName = eventName;
		this->date = date;
		this->startTime = startTime;
		this->endTime = endTime;
	};
	~Event(){};


};


