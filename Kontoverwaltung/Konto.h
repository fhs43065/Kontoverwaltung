#pragma once
#include<string>
#include<vector>

using namespace std;


class Konto {
private:
	string Name;		//Name Kontoinhaber
	float Saldo;		//Kontostand


public:
	void kontoeroeffnung(const string fullName);
	void einzahlen(const float Betrag);
	void auszahlen(const float Betrag);

};
