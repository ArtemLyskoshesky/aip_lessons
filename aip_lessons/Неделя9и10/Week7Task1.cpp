#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

ofstream file;
int H;
char NOLIK = '0';


void FileMaking();
void Formula();

int main() {

	
	cin >> H;


	Formula();


	return(0);
}

void FileMaking() {

	file.open("file.txt");
		file << NOLIK;
		file.close();

}

void Formula() {

	for (int i = 0; i < H; i++) {

		for (int j = 0; j < i + 1; j++) {

			cout << NOLIK;

		}

		cout << endl;

		FileMaking();

	}



}
/*
Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
равно номеру строки. Количество строк Н вводит пользователь (можно из файла).
*/