#include<iostream>
#include<string>
#include"Konto.h"



void Konto::kontoeroeffnung(const string fullName) {
	Saldo = 0;
	Name = fullName;
	string ausgabe = "Konto von " + Name + " wurde erfolgreich angelegt!\n";

	std::cout << ausgabe;
}

void Konto::einzahlen(const float Betrag) {
	
	if (Name.empty() == true)			//Prüfung ob Konto erstellt
	{
		string ausgabe = "ERROR!\nKonto nicht vorhanden!\n";
		std::cout << ausgabe;
	}
	else
	{
		Saldo += Betrag;
		string ausgabe = "Auf " + Name + "'s Konto wurde erfolgreich ein Betrag iHv. " + Betrag + " eingezahlt.\n\nNeuer Kontostand: " + Saldo + "\n";
		std::cout << ausgabe;
		
	}
}

void Konto::auszahlen(const float Betrag) {

	if (Name.empty() == true)			//Prüfung ob Konto erstellt
	{
		string ausgabe = "ERROR!\nKonto nicht vorhanden!\n";
		std::cout << ausgabe; string ausgabe = "ERROR!\nKonto nicht vorhanden!\n";
		std::cout << ausgabe;
	}
	else
	{
		if (Saldo >= Betrag)
		{
			Saldo -= Betrag;
			string ausgabe = "Von " + Name + "'s Konto wurde erfolgreich ein Betrag iHv. " + Betrag + " ausgezahlt.\n\nNeuer Kontostand: " + Saldo + "\n";
			std::cout << ausgabe;
		}
		else
		{
			string ausgabe = "Von " + Name + "'s Konto wurde erfolgreich ein Betrag iHv. " + Betrag + " ausgezahlt.\n\nNeuer Kontostand: " + Saldo + "\n";
			std::cout << ausgabe;
		}
	}
}
