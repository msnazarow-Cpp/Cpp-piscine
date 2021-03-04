#include <iostream>
#include "contact.hpp"
#include <cstdlib>
#include <string>
#include <iomanip>

int	check(const char *s, int len, int i)
{
	int index;

	for (int i = 0; i < len; i++)
		if (!isdigit(s[i]))
			return (0);
	index = atoi(s);
	if (index >= 0 && index < i)
		return (1);
	else
		return (0);
}

void search(int i,contact phonebook[8])
{
	std::string str;

	if (i >= 1){
	std::cout << std::setw(11) << "index|" << std::setw(11) << "first name|" << std::setw(11) << "lastname|" << std::setw(11) << "nickname\n";
	for (int j=0; j < i; j++){
		std::cout << std::setw(10) << j;
		phonebook[j].printnames();
		}
	std::cout << "Type index of contact you want information to be shown\n";
	std::getline(std::cin, str);
	if(check(str.data(), str.length(), i))
		phonebook[atoi(str.data())].printall();
	else
			std::cout << "No such contact\n";
	}
	else
		std::cout << "No contacts added\n";
	std::cout << "Type ADD to add contact, then SEARCH to show all contacts, then EXIT to finally exit\n";
}

int main(void){
	int i = 0;
	contact phonebook[8];
	std::string str;
	std::cout << "Type ADD to add contact, then SEARCH to show all contacts, then EXIT to finally exit\n";
	while (1){
		std::getline(std::cin, str);
		if (!str.compare("ADD")){
			if (i >= 8)
			std::cout << "Max contact's quantity is 8\n";
			else
			{
				phonebook[i++].addcontact();
				std::cout << "Contact added!\n";}
		}
		else if (!str.compare("EXIT"))
			exit(0);
		else if (!str.compare("SEARCH")){
			search(i, phonebook);
		}
		else
			std::cout << "ERROR: Wrong command, try ADD, SEARCH or EXIT\n";
	}
	return 0;
}