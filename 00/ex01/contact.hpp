#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class contact
{
private:
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string login;
	std::string postaladdress;
	std::string email;
	std::string phonenumber;
	std::string birthday;
	std::string favorite_meal;
	std::string underwear;
	std::string secret;

public:
	void addcontact();
	void printnames();
	void printall();
	contact();
	~contact();
};
#endif