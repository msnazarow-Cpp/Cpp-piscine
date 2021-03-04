#include <iostream>
#include "contact.hpp"
#include <iomanip>

contact::contact()
{
}

contact::~contact()
{
}

void contact::addcontact()
{
	std::cout << "Type your first name, then press Enter\n";
	std::getline(std::cin, this->firstname);
	std::cout << "Type your last name, then press Enter\n";
	std::getline(std::cin, this->lastname);
	std::cout << "Type your nickname, then press Enter\n";
	std::getline(std::cin, this->nickname);
	std::cout << "Type your login, then press Enter\n";
	std::getline(std::cin, this->login);
	std::cout << "Type your postal address, then press Enter\n";
	std::getline(std::cin, this->postaladdress);
	std::cout << "Type your email address, then press Enter\n";
	std::getline(std::cin, this->email);
	std::cout << "Type your phone number, then press Enter\n";
	std::getline(std::cin, this->phonenumber);
	std::cout << "Type your birthday date, then press Enter\n";
	std::getline(std::cin, this->birthday);
	std::cout << "Type your favorite meal, then press Enter\n";
	std::getline(std::cin, this->favorite_meal);
	std::cout << "Type your underwear color, then press Enter\n";
	std::getline(std::cin, this->underwear);
	std::cout << "Type your darkest secret, then press Enter\n";
	std::getline(std::cin, this->secret);
}

void contact::printnames()
{
	std::cout << '|' << std::setw(10) << (this->firstname.length() > 10 ? this->firstname.substr(0, 10).replace(9,1, ".") : this->firstname)  << '|';
	std::cout << std::setw(10) << (this->lastname.length() > 10 ? this->lastname.substr(0, 10).replace(9,1, ".") : this->lastname) << '|';
	std::cout << std::setw(10) << (this->nickname.length() > 10 ? this->nickname.substr(0, 10).replace(9,1, ".") : this->nickname) << std::endl;
}
void contact::printall()
{
	std::cout << "First name: " << this->firstname << std::endl;
	std::cout << "Last name: " << this->lastname << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal address: " << this->postaladdress << std::endl;
	std::cout << "Email address: " << this->email << std::endl;
	std::cout << "Phone number: " << this->phonenumber << std::endl;
	std::cout << "Birthday date: " << this->birthday << std::endl;
	std::cout << "Favorite meal: " << this->favorite_meal << std::endl;
	std::cout << "Underwear color: " << this->underwear << std::endl;
	std::cout << "Darkest secret: " << this->secret << std::endl;
}