#include<iostream>
#include<string>
#include"Konto.h"



void Konto::accountopening(const string fullName) {
	AccountBalance = 0;
	Name = fullName;
	string output = "Konto von " + Name + " wurde erfolgreich angelegt!\n";

	std::cout << output;
}

void Konto::deposit(const float amount) {
	
	if (Name.empty() == true)			//Prüfung ob Konto erstellt
	{
		string output = "ERROR!\nKonto nicht vorhanden!\n";
		std::cout << output;
	}
	else
	{
		AccountBalance += amount;
		string output = "Auf " + Name + "'s Konto wurde erfolgreich ein Betrag iHv. " + to_string(amount) + " eingezahlt.\n\nNeuer Kontostand: " + to_string(AccountBalance) + "\n";
		std::cout << output;
		
	}
}

void Konto::payoff(const float amount) {

	if (Name.empty() == true)			//Prüfung ob Konto erstellt
	{
		string output = "ERROR!\nKonto nicht vorhanden!\n";
		std::cout << output; 
	}
	else
	{
		if (AccountBalance >= amount)	//Prüfen ob genug Geld am Konto
		{
			AccountBalance -= amount;
			string output = "Von " + Name + "'s Konto wurde erfolgreich ein Betrag iHv. " + to_string(amount) + " ausgezahlt.\n\nNeuer Kontostand: " + to_string(AccountBalance) + "\n";
			std::cout << output;
		}
		else
		{
			string output = "Der Auszahlungsbetrag iHv. " + to_string(amount) + " ueberschreitet den aktuellen Kontostand!\n";
			std::cout << output;
		}
	}
}
