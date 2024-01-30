#pragma once
#include "Vozilo.h"
class Obicno_vozilo : public Vozilo
{
private:
	void funkcija() override {};
public:
	Obicno_vozilo(string model) : Vozilo(model) {startnacena = 120;}
	double cenaprevoza_ov(Put& p) { return cenaprevoza(p); }
};

