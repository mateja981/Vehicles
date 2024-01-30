#pragma once
#include <cmath>
#include <iostream>
using namespace std;

class Tacka
{
	int x, y;

public:
	Tacka(int x, int y) : x(x), y(y) {};

	double rastojanje(Tacka& t2) const;
	bool uporedi(Tacka& t) { return(x == t.x && y == t.y); }
	friend bool operator == (Tacka& t1, Tacka& t2) { return t1.uporedi(t2); }

	ostream& ispis(ostream& os) const;
	friend ostream& operator << (ostream& os, const Tacka& t) { return t.ispis(os); }
};

