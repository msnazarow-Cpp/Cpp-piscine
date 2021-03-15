#pragma once
#include "ISquad.hpp"
#include "List.hpp"


class Squad : public ISquad{
private:
	List *trooper;

public:
	Squad();
	~Squad();
	Squad(const Squad &);
	Squad &operator=(const Squad &);

	ISpaceMarine *getUnit(int n) const;
	int getCount() const;

	int	push(ISpaceMarine *trooper);
};