#pragma once
#include<string>
#include<vector>

using namespace std;


class Konto {
private:
	string Name;				//Name Kontoinhaber
	float AccountBalance;		//Kontostand


public:
	void accountopening(const string fullName);
	void deposit(const float amount);
	void payoff(const float amount);

};
