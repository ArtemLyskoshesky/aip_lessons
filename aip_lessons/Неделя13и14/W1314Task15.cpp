#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main() {

	srand(time(0));

	float a = 1;

	float sredage = 0;
	float sumage = 0;

	struct Worker {

		int familia;
		int age;
		int special;
		int salary;

	};

	struct Zavod {
		float sredageX;
	};

	Worker mas[20];
	Zavod zavod[20];

	for (int j = 0; j < 20; j++) {

		for (int i = 0; i < 20; i++) {
			mas[i].age = rand() % 55;
			mas[i].familia = rand() % 1000;
			mas[i].special = rand() % 4;
			mas[i].salary = rand() % 10000;

			sumage = sumage + mas[i].age;

		}

		zavod[j].sredageX = sumage / 20;
		
	
		if (zavod[j].sredageX > 350) {
			cout << j << endl;
		}

	}

	return(0);
}

/*
���������� �� N ������� ������ �������� ������� ���������� ����: �������,
������� �������, �������������, ������� �����.
b. ������ ���������� �� �������. ���������� ������ �������, ��� �������
������� ���� 35 ���.
*/