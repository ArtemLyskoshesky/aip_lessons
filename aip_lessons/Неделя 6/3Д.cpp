#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main() {

	ofstream file;

	float y, x;

	cout << "Imput x,y:";
	cin >> x >> y;

	float r = 1;

	float rc = sqrt(x * x + y * y);


	if ((rc < r) and (y > (-x)) and (y > x)) {
		
		file.open("file.txt");
		file << "Da, popadaet";
		file.close();

		cout << "Da, popadaet";
	}
	else {

		file.open("file.txt");
		file << "Net, ne popadaet";
		file.close();

		cout << "Net, ne popadaet";
	}






	return(0);
}