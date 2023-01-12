#include <iostream>
#include "Temperature_Conv.h"

using namespace std;

int main(int argc, char *argv[]) {
	double FAH;
	double CEL;
	
	cout<<"************* CONVERT FAHREHEIT TO CELSIUS ****************"<<endl;
	cout<<"Enter Temperature Value in Fahreheit ( deg F) : "; cin>>FAH;
	cout<<"Celsius (deg C) : "<<fahrenheit_to_celsius(FAH);
	cout<<endl;
	cout<<endl;
	
	cout<<"************* CONVERT CELSIUS TO FAHREHEIT ****************"<<endl;
	cout<<"Enter Temperature Value in Celsius ( deg C) : "; cin>>CEL;
	cout<<"Fahreheit (deg F) : "<<celsius_to_fahrenheit(CEL);
	

	return 0;
}