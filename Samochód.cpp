#include "Samochód.h"

Samochód::Samochód(string kolorNadwozia, int pojemnoscSilnika, int iloscDrzwi, long cena, int rokProdukcji, string markaSamochodu, string modelSamochodu)
{
	this->kolorNadwozia = kolorNadwozia;
	this->pojemnoscSilnika = pojemnoscSilnika;
	this->iloscDrzwi = iloscDrzwi;
	this->cena = cena;
	this->rokProdukcji = rokProdukcji;
	this->wiekSamochodu = 2020 - rokProdukcji;
	this->markaSamochodu = markaSamochodu;
	this->modelSamochodu = modelSamochodu;
	
}

string Samochód::getKolorNadwozia()
{
	return kolorNadwozia;
}

int Samochód::getPojemnoscSilnika()
{
	return pojemnoscSilnika;
}

int Samochód::getIloscDrzwi()
{
	return iloscDrzwi;
}

long Samochód::getCena()
{
	return cena;
}

int Samochód::getRokProdukcji()
{
	return rokProdukcji;
}

int Samochód::getWiekSamochodu()
{
	return wiekSamochodu;
}

string Samochód::getMarkaSamochodu()
{
	return markaSamochodu;
}

string Samochód::getModelSamochodu()
{
	return modelSamochodu;
}

ostream & operator<<(ostream & wyjscie, const Samochód & s)
{
	return wyjscie << "marka: " << s.markaSamochodu << " model: " << s.modelSamochodu << " pojemnosc: " << s.pojemnoscSilnika << " ilosc drzwi: " << s.iloscDrzwi << " cena: " << s.cena << " rok produkcji: " << s.rokProdukcji << " wiek: " << s.wiekSamochodu << " kolor: " << s.kolorNadwozia << endl;
}
