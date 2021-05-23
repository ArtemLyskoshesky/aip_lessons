#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {

	struct RoboPlane {

		int vintspeed;
		int vintrad;
		int koeftag;

	};

	RoboPlane a;

	cout << "Vvedite 3 parametra samloeta dlia rashcheta tiagi:" << endl;
	cin >> a.vintspeed >> a.vintrad >> a.koeftag;

	int TiagaPlane = a.vintspeed * a.vintrad * a.koeftag;
	cout << endl;
	cout << TiagaPlane;



	return(0);
}



/* Task 10 
Робот - самолёт описывается как структура с полями : скорость вращения винта,
радиус винта, коэффициент тяги.Напишите функцию для расчёта тяги,
создаваемую винтом(произведение всех характеристик).*/