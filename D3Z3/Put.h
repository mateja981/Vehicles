#pragma once
#include "Tacka.h"
#include "Lista.h"

class Put
{
	Lista<Tacka*> tacke;

public:

	void dodajtacku(Tacka* t);
	double duzinaputa();
	void operator += (Tacka& t) { dodajtacku(&t); }

	ostream& ispis(ostream& os) const ;
	friend ostream& operator << (ostream& os, const Put& p) { return p.ispis(os); }
};

