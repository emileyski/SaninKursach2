#pragma once
#include <string>
#include <vector>
#include "Admin.h"
#include "Event.h"
using namespace std;
public class Visitor :public Admin
{
public:
	vector<Event> tickets;
	Visitor(string name, string surname, string login, string password):Admin(name, surname, login, password)
	{
		tickets = vector<Event>(0);
	}
};
