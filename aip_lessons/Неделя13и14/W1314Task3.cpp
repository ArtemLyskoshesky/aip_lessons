#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main() {


	ofstream file;
	float a = 0, b = 0, c = 0;

	srand(time(0));
	int mas[20];

	for (int i = 0; i < 20; i++) {
		mas[i] = rand() % 19;
		if (mas[i] % 2 == 0) {
			a = a + 1;
		}
		if (mas[i] %2 != 0) {
			b = b + 1;
		}

	}

	cout << a << endl << b << endl;

	file.open("file");
	file << a << endl << b << endl;
	file.close();

	return(0);
}

// Вычислить сумму нечётных/чётных элементов массива