#pragma once
#include "Put.h"
#include <iostream>
using namespace std;


class Vozilo
{
protected:
	double startnacena;
	string model;
	double cenaprevoza(Put& p) { return 0.1 * p.duzinaputa() + startnacena; }
	virtual void funkcija() = 0;

public:
	Vozilo(string model) : model(model) {}
	friend ostream& operator<<(ostream& os, const Vozilo& v) { os << v.model; return os; }
};

