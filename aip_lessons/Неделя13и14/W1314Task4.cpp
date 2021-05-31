#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

int main() {

	srand(time(0));
	int mas[10];
	ofstream file;

	for (int i = 0; i < 10; i++) {
		mas[i] = rand() % 9;
		if (mas[i] % 2 != 0) {
			mas[i] = mas[i] + 3;
		}
		if (mas[i] % 2 == 0) {
			mas[i] = mas[i] *2;
		}

		cout << mas[i] << endl;

		file.open("file");
		file << mas[i] << endl;
		file.close();

	}






	return(0);
}

// Увеличить все нечётные элементы массива на 3, а чётные в 2 раза
