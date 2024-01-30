#pragma once
#include <exception>
using namespace std;

class GNepostojeciPodatak : public exception
{
public:
	GNepostojeciPodatak() : exception("GRESKA: Ne postoji podatak na toj poziciji") {};
};

class GTackaVecPostoji : public exception
{
public:
	GTackaVecPostoji() : exception("GRESKA: Tacka je vec dodata u ovaj put") {};
};