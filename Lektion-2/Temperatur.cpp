#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
// (c) 2018 Thomas Wenzlaff
class Temperatur
{
public:
		Temperatur();
		~Temperatur();

		void ausgeben();
};

Temperatur::Temperatur(){
}
Temperatur::~Temperatur(){
}
void Temperatur::ausgeben(){

        system("cat /sys/class/thermal/thermal_zone*/temp >temp.txt");
	cout << ifstream("temp.txt").rdbuf();
}
