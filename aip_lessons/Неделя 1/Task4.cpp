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




//������������ ������ ��� �����. ���������� �������� �������� ���������� ���,
//����� �������� ������ ��������� �� ������, � ������ - � ������. 

// ������� 4, ������� 11