#pragma once
#include <string>
#include "nlohmann/json.hpp"
#include <fstream>
#include "Admin.h"
#include "Theatre.h"
#include "Visitor.h"
#include "Event.h"
#include <vector>
#include <stdio.h>


using json = nlohmann::json;

public class RegController
{
public:
	//записує акаунт адміна у файл
	std::string jsonWriteAccount(Admin admin)
	{
		const std::string fileName = "adminAccounts.json";
		std::ifstream reader;
		std::ofstream writer;


		json jAccount;
		json jAccounts;

		jAccount["Name"] = admin.name;
		jAccount["Surname"] = admin.surname;
		jAccount["Login"] = admin.login;
		jAccount["Password"] = admin.password;

		reader.open(fileName);

		if (reader)
		{
			reader.open(fileName);
			reader >> jAccounts;
			reader.close();
			jAccounts.push_back(jAccount);


			writer.open(fileName);
			writer << jAccounts.dump();
			writer.close();
		}
		else
		{
			jAccounts.push_back(jAccount);


			writer.open(fileName);
			writer << jAccounts.dump();
			writer.close();


		}
		return jAccounts.dump();
	}

	//записує акаунт відвідувач у файл
	std::string jsonWriteAccount(Visitor visitor)
	{
		const std::string fileName = "visitorAccounts.json";
		std::ifstream reader;
		std::ofstream writer;


		json jAccount;
		json jAccounts;

		jAccount["Name"] = visitor.name;
		jAccount["Surname"] = visitor.surname;
		jAccount["Login"] = visitor.login;
		jAccount["Password"] = visitor.password;
		jAccount["Tickets"] = {};
		for (int i = 0;  i < visitor.tickets.size();i++)
		{
			json x;
			x["EventName"] = visitor.tickets[i].eventName;
			x["TheatreName"] = visitor.tickets[i].theatreName;

			x["Date"]["Day"] = visitor.tickets[i].date.day;
			x["Date"]["Month"] = visitor.tickets[i].date.month;
			x["Date"]["Year"] = visitor.tickets[i].date.year;

			x["StartTime"]["Hour"] = visitor.tickets[i].startTime.hour;
			x["StartTime"]["Minute"] = visitor.tickets[i].startTime.minute;

			x["EndTime"]["Hour"] = visitor.tickets[i].endTime.hour;
			x["EndTime"]["Minute"] = visitor.tickets[i].endTime.minute;

			jAccount["Tickets"].push_back(x);
		}

		reader.open(fileName);

		if (reader)
		{
			reader >> jAccounts;
			reader.close();
			jAccounts.push_back(jAccount);


			writer.open(fileName);
			writer << jAccounts.dump();
			writer.close();
		}
		else
		{
			jAccounts.push_back(jAccount);


			writer.open(fileName);
			writer << jAccounts.dump();
			writer.close();


		}
		return jAccounts.dump();
	}

	//повертає вектор адміністраторів 
	vector<Admin> GetAdminAccountsVector()
	{
		const string fileName = "adminAccounts.json";

		json jAccounts;

		vector<Admin> adminAccounts;
		ifstream reader;
		reader.open(fileName);
		if (reader)
		{
			reader >> jAccounts;
			reader.close();

			

			int iter = 0;

			for (auto i = jAccounts.begin(); i != jAccounts.end(); ++i, ++iter)
			{
				Admin currentAccount;
				currentAccount.login = jAccounts[iter]["Login"];
				currentAccount.name = jAccounts[iter]["Name"];
				currentAccount.password = jAccounts[iter]["Password"];
				currentAccount.surname = jAccounts[iter]["Surname"];

				adminAccounts.push_back(currentAccount);
			}

			
		}
		return adminAccounts;
		
	}

	//повертає вектор відвідувачів
	vector<Visitor> GetVisitorAccountsVector()
	{
		const string fileName = "visitorAccounts.json";

		json jAccounts;

		vector<Visitor> visitorAccounts;
		ifstream reader;
		reader.open(fileName);

		if (reader)
		{
			reader >> jAccounts;
			reader.close();

			

			int iter = 0;

			for (auto i = jAccounts.begin(); i != jAccounts.end(); ++i, ++iter)
			{
				Visitor currentAccount;
				currentAccount.login = jAccounts[iter]["Login"];
				currentAccount.name = jAccounts[iter]["Name"];
				currentAccount.password = jAccounts[iter]["Password"];
				currentAccount.surname = jAccounts[iter]["Surname"];

				json jEvents = jAccounts[iter]["Tickets"];


				int iter2 = 0;
				for (auto j = jEvents.begin(); j != jEvents.end(); ++j, ++iter2)
				{
					Event currentEvent;

					currentEvent.eventName = jEvents[iter2]["EventName"];
					currentEvent.theatreName = jEvents[iter2]["TheatreName"];

					currentEvent.date.day = jEvents[iter2]["Date"]["Day"];
					currentEvent.date.month = jEvents[iter2]["Date"]["Month"];
					currentEvent.date.year = jEvents[iter2]["Date"]["Year"];

					currentEvent.startTime.hour = jEvents[iter2]["StartTime"]["Hour"];
					currentEvent.startTime.minute = jEvents[iter2]["StartTime"]["Minute"];

					currentEvent.endTime.hour = jEvents[iter2]["EndTime"]["Hour"];
					currentEvent.endTime.minute = jEvents[iter2]["EndTime"]["Minute"];
					currentAccount.tickets.push_back(currentEvent);
				}

				visitorAccounts.push_back(currentAccount);
			}

			
		}
		return visitorAccounts;
		
	}

	//записує театр у файл
	std::string jsonWriteTheatre(Theatre theatre)
	{
		const std::string fileName = "theatreBase.json";
		std::ifstream reader;
		std::ofstream writer;


		json jTheatre;
		json jTheatres;

		jTheatre["TheatreName"] = theatre.theatreName;
		jTheatre["Adress"]["Number"] = theatre.adress.number;
		jTheatre["Adress"]["Street"] = theatre.adress.street;
		jTheatre["Adress"]["City"] = theatre.adress.city;
		jTheatre["Events"] = {};
		for (int i = 0; i < theatre.events.size(); i++)
		{
			json x;
			x["EventName"] = theatre.events[i].eventName;
			x["TheatreName"] = theatre.events[i].theatreName;

			x["Date"]["Day"] = theatre.events[i].date.day;
			x["Date"]["Month"] = theatre.events[i].date.month;
			x["Date"]["Year"] = theatre.events[i].date.year;

			x["StartTime"]["Hour"] = theatre.events[i].startTime.hour;
			x["StartTime"]["Minute"] = theatre.events[i].startTime.minute;

			x["EndTime"]["Hour"] = theatre.events[i].endTime.hour;
			x["EndTime"]["Minute"] = theatre.events[i].endTime.minute;

			jTheatre["Events"].push_back(x);
		}

		reader.open(fileName);

		if (reader)
		{
			reader >> jTheatres;
			reader.close();
			jTheatres.push_back(jTheatre);


			writer.open(fileName);
			writer << jTheatres.dump();
			writer.close();
		}
		else
		{
			jTheatres.push_back(jTheatre);


			writer.open(fileName);
			writer << jTheatres.dump();
			writer.close();


		}
		return jTheatres.dump();
	}

	//повертає вектор всіх театрів
	vector<Theatre> GetTheatresVector() {
		const string fileName = "theatreBase.json";

		json jTheatres;
		vector<Theatre> theatres;
		ifstream reader;
		reader.open(fileName);
		if (reader)
		{
			reader >> jTheatres;
			reader.close();

			

			int iter = 0;

			for (auto i = jTheatres.begin(); i != jTheatres.end(); ++i, ++iter)
			{
				Theatre currentTheatre;
				currentTheatre.theatreName = jTheatres[iter]["TheatreName"];
				currentTheatre.adress.number = jTheatres[iter]["Adress"]["Number"];
				currentTheatre.adress.street = jTheatres[iter]["Adress"]["Street"];
				currentTheatre.adress.city = jTheatres[iter]["Adress"]["City"];

				json jEvents = jTheatres[iter]["Events"];


				int iter2 = 0;
				for (auto j = jEvents.begin(); j != jEvents.end(); ++j, ++iter2)
				{
					Event currentEvent;

					currentEvent.eventName = jEvents[iter2]["EventName"];
					currentEvent.theatreName = jEvents[iter2]["TheatreName"];

					currentEvent.date.day = jEvents[iter2]["Date"]["Day"];
					currentEvent.date.month = jEvents[iter2]["Date"]["Month"];
					currentEvent.date.year = jEvents[iter2]["Date"]["Year"];

					currentEvent.startTime.hour = jEvents[iter2]["StartTime"]["Hour"];
					currentEvent.startTime.minute = jEvents[iter2]["StartTime"]["Minute"];


					currentEvent.endTime.hour = jEvents[iter2]["EndTime"]["Hour"];
					currentEvent.endTime.minute = jEvents[iter2]["EndTime"]["Minute"];

					currentTheatre.events.push_back(currentEvent);
				}

				theatres.push_back(currentTheatre);
			}

			return theatres;
		}
		
		return theatres;

	}

	//додає подію до театру
	void addEventToTheatre(int index, Event _event)
	{
		vector<Theatre> theatres = GetTheatresVector();
		theatres[index].events.push_back(_event);

		rewriteTheatreBase(theatres);
		
	}

	//видаляє івент з театру по індексу івента
	void removeEventFromTheatre(int theatreIndex, int eventIndex)
	{
		vector<Theatre> theatres = GetTheatresVector();
		vector<Event>* currentTheatreEvents = &theatres[theatreIndex].events;
		Event* eventToDelete = &theatres[theatreIndex].events[eventIndex];

		vector<Visitor> visitors = GetVisitorAccountsVector();

		for (int i = 0; i < visitors.size(); i++)
		{
			for (int j = 0; j < visitors[i].tickets.size(); j++)
			{
				if (eventToDelete->eventName == visitors[i].tickets[j].eventName)
				{
					visitors[i].tickets.erase(visitors[i].tickets.begin() + j);
				}
			}
		}

		currentTheatreEvents->erase(currentTheatreEvents->begin() + eventIndex);

		rewriteTheatreBase(theatres);
		rewriteVisitorAccountsBase(visitors);
	}

	//видаляє квиток у відвідувача
	void removeEventFromVisitor(int eventIndex, Visitor visitor)
	{
		vector<Visitor> visitors = GetVisitorAccountsVector();

		for (int i = 0; i < visitors.size(); i++)
		{
			if (visitors[i].login == visitor.login)
			{
				visitors[i].tickets.erase(visitors[i].tickets.begin() + eventIndex);
				break;
			}
		}
		
		rewriteVisitorAccountsBase(visitors);


	}
	//додає квиток до відвідувача
	void addEventToVisitor(std::string login, Event _event)
	{
		vector<Visitor> visitors= GetVisitorAccountsVector();

		for (int i = 0; i < visitors.size(); i++)
		{
			if (login == visitors[i].login)
			{
				visitors[i].tickets.push_back(_event);
			}
		}
		rewriteVisitorAccountsBase(visitors);
	}

	//видаляє театр по індексу
	void removeTheatreAtIndex(int index) {
		vector<Theatre> theatres = GetTheatresVector();
		theatres.erase(theatres.begin() + index);
		rewriteTheatreBase(theatres);

	}

	//заміняє театр по індексу
	void replaceTheatreAtIndex(Theatre theatre, int index)
	{
		vector<Theatre> theatres = GetTheatresVector();
		theatres[index] = theatre;

		rewriteTheatreBase(theatres);

	}

	//повертає театр за індексом
	Theatre GetTheatreAtIndex(int index)
	{
		vector<Theatre> theatres = GetTheatresVector();
		Theatre selectedTheatre = theatres[index];
		return selectedTheatre;
	}

	//повертає список всіх подій (івентів)
	vector<Event> GetAllEvents() {
		vector<Theatre> theatres = GetTheatresVector();
		vector<Event> events;
		for (int i = 0; i < theatres.size(); i++) {
			for (int j = 0; j < theatres[i].events.size(); j++)
				events.push_back(theatres[i].events[j]);
		}
		return events;
	}

//метод що перезаписує базу театрів, приймає вектор театрів
private: void rewriteTheatreBase(vector<Theatre> theatres)
	{
		remove("theatreBase.json");

		for (int i = 0; i < theatres.size(); i++) {
			jsonWriteTheatre(theatres[i]);
		}
	}

	   //метод що перезаписує базу аккаунтів відвідувачів, приймає вектор відвідувачів
	   void rewriteVisitorAccountsBase(vector<Visitor> visitors)
	   {
		   remove("visitorAccounts.json");

		   for (int i = 0; i < visitors.size(); i++) {
			   jsonWriteAccount(visitors[i]);
		   }
	   }
};
