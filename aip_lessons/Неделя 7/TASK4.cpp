#include <iostream>
#include <fstream>
#include <cmath>
#include <windows.h>
#include <conio.h>

using namespace std;




int main() {

	ofstream file;

	float x, xf;
	float dx;


	cout << "Diapozone:";
	cin >> x >> xf;
	cout << "Step size:";
	cin >> dx;

	for (int i = x; i < xf; i + 0) {

		i = i+dx;
		cout << i << endl;


		file.open("file.txt");
		file << i;
		file.close();

	}

	



	return(0);
}

