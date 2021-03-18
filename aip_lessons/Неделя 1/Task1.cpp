#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;


int main() {

	cout << " TaskNumber1   " << endl;
	cout << "  \n " << endl;
	cout << "   ***    " << endl;
	cout << "  *   *   " << endl;
	cout << "  *****   " << endl;
	cout << "  *   *   " << endl;
	cout << "  *   *   " << endl;
	cout << "  \n " << endl;

	ofstream file;

	file.open("task1.txt");
	cout << "   ***    " << endl;
	cout << "  *   *   " << endl;
	cout << "  *****   " << endl;
	cout << "  *   *   " << endl;
	cout << "  *   *   " << endl;
	cout << "  \n " << endl;
	file.close();

	return 0;
}

// Вывести на экран Первую букву имени из символов "*" (звездочка)