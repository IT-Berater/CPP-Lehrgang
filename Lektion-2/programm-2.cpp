#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

// (c) 2018 Thomas Wenzlaff
// programm-2.cpp

#define PROGRAMM_VERSION 3

class Version
{
public:
	Version();
	~Version();

	void ausgeben();
};

Version::Version(){
	cout << "Version ausgeben.\n";
        cout << "Programm Nummer: " <<  PROGRAMM_VERSION <<  endl;
}

Version::~Version(){
	cout << "Programm beendet.\n";
}

void Version::ausgeben(){
	// über cat die Systemtemperatur des Pi auslesen und in eine neu Datei schreiben
        std::system("cat /sys/class/thermal/thermal_zone*/temp  >temp.txt"); 
	std::cout << std::ifstream("temp.txt").rdbuf();
}

int main() 
{
	  cout << "www.wenzlaff.de\n";
	  // Instanz der Klasse Version erstellen
	  Version version;
	  version.ausgeben();
	  return 0;
}




