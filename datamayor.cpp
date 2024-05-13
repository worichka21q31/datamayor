#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdlib>
#include <fstream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	/*
		ofstream fout;
		fout.open("myFile.txt", ofstream::app);

		if (!fout.is_open())
		{
			cerr << "errrerrerrerere";
		}
		else
		{
			string name;
			cin.ignore(3200, '\n');
			for (int i = 0; i < 4; i++)
			{
				cout << "Введите Имя И Фамилию " << i+1 << "\n";
				getline(cin, name, '\n');
				fout  << name << "\n";
			}

		}


		fout.close();
	*/
	ofstream fout;
	fout.open("myFile.txt", ofstream::app);
	ifstream fin;
	fin.open("myFile.txt");

	if (!fin.is_open())
	{
		cerr << "errrerrerrerere";
	}
	else
	{
		cout << "Файл Открыт \n";
		char sym;
		string name;

		while (!fin.eof())
		{
			fin >> name;
			cout << name << "\n";
		}
	}
	fin.close();

	return 0;
}