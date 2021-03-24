#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main() {

	ofstream file;

	float y, x;

	cout << "Imput x:";
	cin >> x;



	if (x > 1) {
		y = 3*x - 7;
	}

	if (x == 1) {
		y = 3;
	}

	if (x < 1) {

		y = 3 * fabs(x + 2) - 7;

	}


	cout << y;

	file.open("file.txt");
	file << y;
	file.close();
	


	return(0);
}