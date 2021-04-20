#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;

long float CandyPrice, CookiePrice, taska, taskb;
ofstream file;

void Tasks();
void FileMaking();


int main() {


	cout << "Imput Candy and Cookie price of kg:" << endl;

	cin >> CandyPrice;
	cin >> CookiePrice;


	
	Tasks();

	FileMaking();




	return(0);
}

void Tasks() {

	//TaskA

	taska = 1.0 * ((CandyPrice * 0.3) + (CookiePrice * 0.4));
	cout << "Odna pokubka 300gr candy i 400gr cookie:" << "\n" << taska << endl;

	//TaskB

	taskb = 3.0 * ((CandyPrice * 1.8) + (CookiePrice * 2));
	cout << "Tri pokypki 1.8kg Candy i 2kg Cookie:" << "\n" << taskb << endl;


}

void FileMaking() {

	file.open("task14.txt");
	file << "Odna pokubka 300gr candy i 400gr cookie:" << "\n" << taska << endl;
	file << "Tri pokypki 1.8kg Candy i 2kg Cookie:" << "\n" << taskb << endl;
	file.close();


}


/*

Пользователь вводит цены 1 кг конфет и 1 кг печенья. Найдите стоимость: а) одной
покупки из 300 г конфет и 400 г печенья; б) трех покупок, каждая из 2 кг печенья и
1 кг 800 г конфет.
Организовать предыдущее задание с помощью функций.

*/