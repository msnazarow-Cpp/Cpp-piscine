#pragma once
#include "ISpaceMarine.hpp"

typedef ISpaceMarine myclass;

class List
{
private:
	myclass *content;
	List *next;

public:
	List(myclass *content = 0);
	List(const List &list);
	List &operator=(const List &list);

	int push(myclass *content);
	myclass *getUnit(int n);
	int getCount();
	~List();

	myclass *getContent() const;
};