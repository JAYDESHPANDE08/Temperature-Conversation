#ifndef _TEMPERATURE_CONV_H_
#define _TEMPERATURE_CONV_H_

double fahrenheit_to_celsius(double fahren){
	double celsi;
	celsi = 0.56* (fahren - 32);
	return celsi;
}

double celsius_to_fahrenheit(double celsi){
	double fahren;
	fahren = (1.8 * celsi) + 32;
	return fahren;
}

double kelvin_to_fahrenheit(double kelvin){
	double fahren;
	fahren = (1.8 * (kelvin - 273.15)) + 32;
	return fahren;
}

double fahrenheit_to_kelvin(double fahren){
	double kelvin;
	kelvin = (0.56 * (fahren - 32)) + 273.16;
	return kelvin;
}

double rankine_to_fahrenheit(double rank){
	double fahren;
	fahren = rank -459.69;
	return fahren;
}

double fahrenheit_to_rankine(double fahren){
	double rank;
	rank = fahren + 459.69;
	return rank;
}

double kelvin_to_celsius(double kelv){
	double celsi;
	celsi = kelv - 273.16;
	return celsi;
}

double celsius_to_kelvin(double celsi){
	double kelv;
	kelv = celsi + 273.16;
	return kelv;
}

double rankin_to_celsius(double rank){
	double celsi;
	celsi = 0.56 * ((rank - 459.69) - 32);
	return celsi;
}

double celsius_to_rankin(double celsi){
	double rank;
	rank = ((1.8 * celsi) + 32) + 459.69;
	return rank;
}

double rankin_to_kelvin(double rank){
	double kelvi;
	kelvi = (0.56 * ((rank - 459.69) - 32)) + 273.16;
	return kelvi;
}

double kelvin_to_rankin(double kelvi){
	double rank;
	rank = (1.8 * (kelvi - 273.16) + 32) + 459.69;
	return rank;
}

#endif