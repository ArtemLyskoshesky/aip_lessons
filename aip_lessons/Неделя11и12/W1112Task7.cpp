#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;



int main() {


	struct Datchik {

		float min, max, pogresh, maxspeed;

	};

	Datchik A, B;

	ofstream file;



	cout << "Vvedi dannie A:";
	cin >> A.min >> A.max >> A.pogresh >> A.maxspeed;

	cout << "Vvedi dannie B:";
	cin >> B.min >> B.max >> B.pogresh >> B.maxspeed;

	if (A.maxspeed < B.maxspeed) {
		cout << "A:" << "Min znach:" << A.min << endl << "Max znach:" << A.max << endl << "Pogresh:" << A.pogresh << endl << "Max Speed:" << A.maxspeed;
	}

	else {
		cout << "B:" << "Min znach:" << B.min << endl << "Max znach:" << B.max << endl << "Pogresh:" << B.pogresh << endl << "Max Speed:" << B.maxspeed;
	}

	return(0);
}




/* Task 7
Имеется информация о датчиках: диапазон измеряемых значений (min, max),
погрешность, максимальная скорость. Вывести данные о датчике с наименьшей
скоростью работы.
*/