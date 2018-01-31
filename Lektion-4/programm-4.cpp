#include <iostream>
#include "Temperatur.h"

using namespace std;

// (c) 2018 Thomas Wenzlaff
// programm-4.cpp

#define PROGRAMM_VERSION 4 

int main() 
{
	cout << "www.wenzlaff.de" << endl;
	cout << "Programm Version " << PROGRAMM_VERSION << endl;
	  
	Temperatur temperatur;
	cout << "Raspberry Pi Temperatur " << temperatur.ausgeben() << " Grad Celsius";

	return 0;
}




