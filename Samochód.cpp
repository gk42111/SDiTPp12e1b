#include "Samoch�d.h"

Samoch�d::Samoch�d(string kolorNadwozia, int pojemnoscSilnika, int iloscDrzwi, long cena, int rokProdukcji, string markaSamochodu, string modelSamochodu)
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

string Samoch�d::getKolorNadwozia()
{
	return kolorNadwozia;
}

int Samoch�d::getPojemnoscSilnika()
{
	return pojemnoscSilnika;
}

int Samoch�d::getIloscDrzwi()
{
	return iloscDrzwi;
}

long Samoch�d::getCena()
{
	return cena;
}

int Samoch�d::getRokProdukcji()
{
	return rokProdukcji;
}

int Samoch�d::getWiekSamochodu()
{
	return wiekSamochodu;
}

string Samoch�d::getMarkaSamochodu()
{
	return markaSamochodu;
}

string Samoch�d::getModelSamochodu()
{
	return modelSamochodu;
}

ostream & operator<<(ostream & wyjscie, const Samoch�d & s)
{
	return wyjscie << "marka: " << s.markaSamochodu << " model: " << s.modelSamochodu << " pojemnosc: " << s.pojemnoscSilnika << " ilosc drzwi: " << s.iloscDrzwi << " cena: " << s.cena << " rok produkcji: " << s.rokProdukcji << " wiek: " << s.wiekSamochodu << " kolor: " << s.kolorNadwozia << endl;
}
