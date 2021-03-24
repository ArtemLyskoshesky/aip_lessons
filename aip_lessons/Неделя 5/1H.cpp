#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main() {

	ofstream file;

	float y, x;

	cout << "Imput x:";
	cin >> x;



	if (x > 3) {

		y = 2*x - 10;

	}

	if (x == 3) {

		y = 10;

	}

	if (x < 3) {

		y = pow(2 * x + 1, 2) - 1;

	}

	cout << y;

	file.open("file.txt");
	file << y;
	file.close();



	return(0);
}