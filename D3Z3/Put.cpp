#include "Put.h"

void Put::dodajtacku(Tacka* t)
{
	for (int i = 0; i < tacke.brojelemenata(); i++) {
		if (tacke[i] == t) throw GTackaVecPostoji();
	}
	tacke += t;
}

double Put::duzinaputa()
{
	double rastojanje=0;
	for (int i = 0; i < tacke.brojelemenata()-1; i++) {
		rastojanje += tacke[i]->rastojanje(*tacke[i + 1]);
	}
	return rastojanje;
}

ostream& Put::ispis(ostream& os) const
{
	for (int i = 0; i < tacke.brojelemenata(); i++) {
		os << *tacke[i] << endl;
	}

	return os;
}
