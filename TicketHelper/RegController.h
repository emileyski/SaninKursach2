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
	std::string json_write(Admin admin)
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
	std::string json_write(Visitor visitor)
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

	vector<Admin> GetAdminAccountsVector()
	{
		const string fileName = "adminAccounts.json";

		json jAccounts;

		ifstream reader;
		reader.open(fileName);
		reader >> jAccounts;
		reader.close();

		vector<Admin> adminAccounts;
		
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

		return adminAccounts;
	}
	vector<Visitor> GetVisitorAccountsVector()
	{
		const string fileName = "visitorAccounts.json";

		json jAccounts;

		ifstream reader;
		reader.open(fileName);
		reader >> jAccounts;
		reader.close();

		vector<Visitor> visitorAccounts;

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

		return visitorAccounts;
	}

	std::string json_write_theatre(Theatre theatre)
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
	vector<Theatre> GetTheatresVector() {
		const string fileName = "theatreBase.json";

		json jTheatres;

		ifstream reader;
		reader.open(fileName);
		reader >> jTheatres;
		reader.close();

		vector<Theatre> theatres;

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

	void remove_and_rewrite_theatre_list(int index) {
		vector<Theatre> theatres = GetTheatresVector();
		theatres.erase(theatres.begin() + index);
		remove("theatreBase.json");

		for (int i = 0; i < theatres.size(); i++) {
			json_write_theatre(theatres[i]);
		}
	}
};
