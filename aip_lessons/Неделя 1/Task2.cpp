#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;


int main() {

	ofstream file;

	float PI = 3.1415926535;
	float r1, r2;
	float A;

	cout << "Vvedite r1, r2 to find S of salinon" << endl;
	cin >> r1;
	cin >> r2;

	A =(PI * (r1 + r2) * (r1 + r2))/4;

	cout << A;

	file.open("task2.txt");
	file << A;
	file.close();



	return(0);
}

// Пользователь вводит параметры фигуры.Найти периметр и площадь фигур: 2f