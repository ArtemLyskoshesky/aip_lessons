#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {

	int i, a;
	int b = 0;
	float y, x;


	cout << "Wvedite chisla Che i X:";
	cin >> a >> x;

	ofstream file;

	for (i = 0; i < a; i++) {

		y = x + x * i;
		b = b + y;
		cout << b << endl;


	}

	file.open("file.txt");
	file << b;
	file.close();

	return(0);
}

/*
������������ ����� ����� � � �. ��������� y:
������� 11, ����� 3a.
*/