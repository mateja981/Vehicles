#include <iostream>
#include "Tacka.h"
#include "Put.h"
#include "Greske.h"
#include "Vozilo.h"
#include "Obicno_vozilo.h"
using namespace std;

int main() {

	try
	{
		Tacka t1(0, 0);
		Tacka t2(1000, 0);
		Tacka t3(1000, 1000);

		//cout << t1 << endl;
		Put p1;
		p1 += t1;
		p1 += t2;
		p1 += t3;

		
		cout << "Duzina puta: "<< p1.duzinaputa() << endl;
		cout << "Put: "<< p1;


		//Obicno_vozilo ov("zastava");
		//cout << ov.cenaprevoza_ov(p1);
	}
	catch (exception e) {
		cout << e.what() << endl;
	}
	
}