#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;

int main() {

	float CandyPrice, CookiePrice, taska, taskb;
	ofstream file;

	cout << "Imput Candy and Cookie price of kg:" << endl;

	cin >> CandyPrice;
	cin >> CookiePrice;


	//TaskA

	taska = 1.0 * ((CandyPrice * 0.3) + (CookiePrice * 0.4));
	cout << "Odna pokubka 300gr candy i 400gr cookie:" << "\n" << taska << endl;

	//TaskB

	taskb = 3.0 * ((CandyPrice * 1.8) + (CookiePrice * 2));
	cout << "Tri pokypki 1.8kg Candy i 2kg Cookie:" << "\n" << taskb << endl;
	

	file.open("task14.txt");
	file << "Odna pokubka 300gr candy i 400gr cookie:" << "\n" << taska << endl;
	file << "Tri pokypki 1.8kg Candy i 2kg Cookie:" << "\n" << taskb << endl;
	file.close();




	return(0);
}

/*

������������ ������ ���� 1 �� ������ � 1 �� �������. ������� ���������: �) �����
������� �� 300 � ������ � 400 � �������; �) ���� �������, ������ �� 2 �� ������� �
1 �� 800 � ������.
������������ ���������� ������� � ������� �������.

*/