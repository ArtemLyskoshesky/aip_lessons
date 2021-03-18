#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;


int main() {

	ofstream file;

	float e = 2.71828182846;
	float x = 3.6;
	float y;


	y = pow(e, x - 2) + fabs(sin(x)) - pow(x, 4)*cos(1/x);

	cout << y;

	file.open("task8.txt");
	file << y;
	file.close();

	return(0);

}

//¬ычислите значение выражени€: E, вариант 11