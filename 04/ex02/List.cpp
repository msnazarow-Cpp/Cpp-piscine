#include "List.hpp"
#include "ISpaceMarine.hpp"
#include <cstdlib>
#include <iostream>

List::List(myclass	*content)
{
	this->content = content;
	next = NULL;
}

List::List(const List &list)
{
	*this = list;
}

List &List::operator=(const List &list) {

	List *pointer = (List*)&list;
	List *my = this;
	content = list.content->clone();
	while (pointer->next)
	{
		my->next = new List(pointer->next->content->clone());
		my = my->next; pointer = pointer->next;
	}
	return (*this);
}

int List::push(myclass	*content) {
	int count = 1;
	List *pointer;
	int makeSence = 1;
	if (!content)
		makeSence = 0;
	pointer = this;
	while (pointer->next){
		if (pointer->content == content)
			makeSence = 0;
		pointer = pointer->next;
		count++;}
	if (makeSence && pointer->content != content)
		pointer->next = new List(content);
	return (count);
}

myclass	*List::getUnit(int n) {
	List *list = this;
	for (int i = 0; i < n ; i++)
	{
		if (!list->next)
			return (0);
		list = list->next;
	}
	return (list->content);
}

int List::getCount()
{
	int count = 0;
	List *pointer;
	if (this->content)
	{
		count++;
		pointer = this;
		while (pointer->next){
			pointer = pointer->next;
			count++;}
	}
	return (count);
}

List::~List()
{
	delete (ISpaceMarine*)content;
	if (next){
		delete next;
		next = 0;}
}
