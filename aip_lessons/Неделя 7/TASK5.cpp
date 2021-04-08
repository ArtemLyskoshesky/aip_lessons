#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {

	int i, a;
	int b = 0;

	cout << "Wvedite chislo:";
	cin >> a;

	ofstream file;


	for (i = 100; i < 1000; i++) {

		if (i % 100 / 10 + i % 10 + i / 100 == a) {

			b = b + 1;

		}


	}

	cout << "result:" << b << endl;

	file.open("file.txt");
	file << b;
	file.close();

	return(0);
}

/*
Составить алгоритм, определяющий количество трёхзначных натуральных чисел,
сумма цифр которого равна А. Задание 7, вариант 11.
*/