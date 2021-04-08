#include <iostream>
#include <fstream>
#include <cmath>
#include <windows.h>
#include <conio.h>

using namespace std;

float func(float x);


int main() {

	ofstream file;

	float x, xf;
	float dx;
	float f;

	cout << "Diapozone:";
	cin >> x >> xf;
	cout << "Step size:";
	cin >> dx;

	while (x < xf) {
		f = func(x);
		cout << f << endl;
		x += dx;
	}

	file.open("file.txt");
	file << f;
	file.close();


	return(0);
}

float func(float fx) {
	return sqrt(5 + 4 * fx) + 13 * fx + cos(12 * fx + 91);
}
/*
Протабулировать функцию (шаг и диапазон задаёт пользователь):
Вариант 11, k.
*/