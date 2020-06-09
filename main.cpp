#include <iostream>
#include <vector>
#include "Samochód.h"
using namespace std;

int main() {
	string kolorNadwozia[] = { "bia³y","¿ó³ty","zielony","niebieski","pomarañczowy","metalik","czarny","br¹zowy","fioletowy","czerwony" };
	int pojemnoscSilnika[] = { 1000,2000,3000,4000,5000 };
	int iloscDrzwi[] = {3, 5};
	vector<string> markaSamochodu{ "A","B","C","D","E" };
	vector<string> modeleSamochoduA{"1","2","3","4","5","6","7","8"};
	vector<string> modeleSamochoduB{ "1","2","3","4","5","6","7","8" };
	vector<string> modeleSamochoduC{ "1","2","3","4","5","6","7","8" };
	vector<string> modeleSamochoduD{ "1","2","3","4","5","6","7","8" };
	vector<string> modeleSamochoduE{ "1","2","3","4","5","6","7","8" };
	Samochód samochod(kolorNadwozia[3], pojemnoscSilnika[1], iloscDrzwi[0], 1000, 1990, markaSamochodu[0], modeleSamochoduA[1]);
	cout << samochod;
	system("pause");
	return 0;
}