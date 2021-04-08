#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ofstream file;

	int H;
	
	char NOLIK = '0';

	cin >> H;

	for (int i = 0; i < H; i++) {

		for (int j = 0; j < i+1; j++) {

			cout << NOLIK;

		}

		cout << endl;

	file.open("file.txt");
	file << NOLIK;
	file.close();

	}

	


	return(0);
}


/* 
Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
равно номеру строки. Количество строк Н вводит пользователь (можно из файла).
*/