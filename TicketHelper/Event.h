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
	bool operator ==(const Time& other) {
		if (this->hour == other.hour && this->minute == other.minute) {
			return true;
		}
		else
			return false;
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
	bool operator ==(const Date& other) {
		if (this->day == other.day && this->month == other.month&& this->year == other.year) {
			return true;
		}
		else
		{
			return false;
		}
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
	Event(string eventName, string theatreName, Date date, Time startTime, Time endTime){
		this->eventName = eventName;
		this->theatreName = theatreName;
		this->date = date;
		this->startTime = startTime;
		this->endTime = endTime;
	};

	int returnDuration() {
		if (startTime.hour == endTime.hour && startTime.minute == endTime.minute) {
			return 0;
		}
		else if (startTime.hour > endTime.hour || startTime.minute > endTime.minute) {
			int minutes = ((24 * 60) + (endTime.hour * 60) + endTime.minute) - ((startTime.hour * 60) + startTime.minute);
			return minutes;
		}
		else
		{
			int minutes = ((endTime.hour * 60) + endTime.minute) - ((startTime.hour * 60) + startTime.minute);
			return minutes;
		}

		//return minutes;
	}
	bool operator ==(const Event& other) {
		if (this->theatreName == other.theatreName &&
			this->eventName == other.eventName &&
			this->date == other.date &&
			this->startTime == other.startTime &&
			this->endTime == other.endTime) 
		{
			return true;
		}
		else
		{
			return false;
		}
	}


};


