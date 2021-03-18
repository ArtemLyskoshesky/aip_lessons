#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;

ofstream file;

int main() {

	float a, b, c;

	cout << "Imput 2 numbers:";

	cin >> a;
	cin >> b;

	c = a;
	a = b;
	b = c;

	cout << "result:" << "\n" << a << "\n" << b;


	file.open("task4.txt");
	file << a << b;
	file.close();



	return(0);

}




//Пользователь вводит два числа. Необходимо поменять значения переменных так,
//чтобы значение первой оказалось во второй, а второй - в первой. 

// Задание 4, вариант 11