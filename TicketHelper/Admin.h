#pragma once
#include <string>
using namespace std;
public class Admin
{
public:
	string name, surname, login, password;
	Admin()
	{

	}
	Admin(string name, string surname, string login, string password)
	{
		this->name = name;
		this->surname = surname;
		this->login = login;
		this->password = password;

	}

};


