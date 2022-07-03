#pragma once
#include <string>
#include "nlohmann/json.hpp"
#include <fstream>
#include "Admin.h"
#include "Visitor.h"
#include "Event.h"
#include <vector>

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
};
