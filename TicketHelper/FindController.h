#pragma once
#include <string>
#include "Theatre.h"
#include "Event.h"
#include "RegController.h"
#include <vector>

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
};