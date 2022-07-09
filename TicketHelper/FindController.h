#pragma once
#include <string>
#include "Theatre.h"
#include "Event.h"
#include "RegController.h"
#include <vector>
#include <Windows.h>

using namespace std;

public class FindController
{
public:
	//повертає вектор подій, які відбуваються у цьому місті
	vector<Event> GetEventVectorByCity(vector<Event> events, string city) {
		vector<Event> resultEvents;
		vector<Theatre> theatres = RegController().GetTheatresVector();
		for (int i = 0; i < theatres.size(); i++) {
			if (theatres[i].adress.city == city)
				for (int j = 0; j < theatres[i].events.size(); j++)
					resultEvents.push_back(theatres[i].events[j]);
		}
		return resultEvents;
	}
	//повертає список подій із схожою назвою
	vector<Event> GetEventVectorByEventName(vector<Event> events, string eventName) {
		vector<Event> resultEvents;
		for (int i = 0; i < events.size(); i++) {
			if (!events[i].eventName.find(eventName))
				resultEvents.push_back(events[i]);
		}
		return resultEvents;
	}
	//повертає список подій, тривалість яких не перевищує заданий час
	vector<Event> GetEventVectorByDuration(vector<Event> events, int maxMins) {
		vector<Event> resultEvents;
		for (int i = 0; i < events.size(); i++) {
			if (events[i].returnDuration() < maxMins)
				resultEvents.push_back(events[i]);
		}
		return resultEvents;
	}
	vector<Event> GetEventVectorByDayTime(vector<Event> events, int dayTime) {
		vector<Event> resultEvents;
		for (int i = 0; i < events.size(); i++) {
			if (dayTime == 0 && events[i].startTime.hour < 12)
				resultEvents.push_back(events[i]);
			if (dayTime == 1 && events[i].startTime.hour > 12)
				resultEvents.push_back(events[i]);
		}
		return resultEvents;
	}
	vector<Event> GetEventVectorByDate(vector<Event> events, int selectedType) {
		SYSTEMTIME st;
		GetLocalTime(&st);
		vector<Event> resultEvents;
		for (int i = 0; i < events.size(); i++) {
			if (events[i].date.day == st.wDay && events[i].date.month == st.wMonth && events[i].date.year == st.wYear && selectedType == 0) {
				resultEvents.push_back(events[i]);
			}
			if (events[i].date.month == st.wMonth && events[i].date.year == st.wYear && selectedType == 1) {
				resultEvents.push_back(events[i]);
			}
			
			if (events[i].date.month+ 1 == st.wMonth && events[i].date.year == st.wYear && selectedType == 2) {
				resultEvents.push_back(events[i]);
			}
			if (events[i].date.year == st.wYear && selectedType == 3) {
				resultEvents.push_back(events[i]);
			}
		}
		return resultEvents;
	}/*
	today
	this month
	next month
	this year*/
};