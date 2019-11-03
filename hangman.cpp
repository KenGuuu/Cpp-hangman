//IDE was Visual Studio 2017
#include "pch.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

string slowo;
char znak;
vector <char> odp;
vector <char> slowo1;
int blad = 0;

void wypisywanie();
void zgadywanie();
void program();
void sprawdzanie();
void koniec();

void program(string x) {
	for (int i = 0; i < x.size(); i++)
	{
		odp.push_back(x[i]);
	}

	for (int i = 0; i < x.size(); i++)
	{
		slowo1.push_back('*');
	}
	wypisywanie();
}

void wypisywanie(){
	system("CLS");
	cout << "Masz: " << blad << "/3 szans" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
	}

	for (int i = 0; i < slowo.size(); i++)
	{
		cout << slowo1[i] << " ";
	}

	for (int i = 0; i < 3; i++)
	{
		cout << endl;
	}
	sprawdzanie();
	zgadywanie();
}

void zgadywanie() {
	int temp = 0;
	cout << "Podaj litere: ";
	cin >> znak;

	for (int i = 0; i < slowo.size(); i++)
	{
		if (odp[i]==znak) {
			slowo1[i] = znak;
			temp += 1;
		}
	}
	if (temp == 0) {
		blad += 1;
	}

	wypisywanie();
}


void sprawdzanie() {
	int temp2 = 0;
	if (blad == 3) {
		system("CLS");
		for (int i = 0; i < 2; i++)
		{
			cout << endl;
		}
		cout << "PRZEGRALES";
		for (int i = 0; i < 2; i++)
		{
			cout << endl;
		}
		system("PAUSE");
		koniec();
	}
	else {
		for (int i = 0; i < slowo.size(); i++)
		{
			if (slowo1[i] == '*') {
				temp2 += 1;
			}
		}
	}

	if (temp2 == 0) {
		system("CLS");
		for (int i = 0; i < 2; i++)
		{
			cout << endl;
		}
		cout << "WYGRALES!!!";
		for (int i = 0; i < 2; i++)
		{
			cout << endl;
		}
		system("PAUSE");
		koniec();
	}

}

void koniec() {
	system("CLS");
	exit(0);
}
int main() {
	cin >> slowo;
	program(slowo);

	return 0;
}
