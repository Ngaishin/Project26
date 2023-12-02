#include "memberTable.h"
#include <iostream>
#include <cstring>

using namespace std;

void bopReport()
{
	int quantity;
	cout << "Number of creators: ";
	while (!(cin >> quantity))
	{
		cout << "Please enter integer: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	cout << "=======================\n";
	bopMan* b = creaTable(quantity);
	mTable(b, quantity);
	deltable(b);
}


bopMan* creaTable(int quantity)
{
	char fullname[20];
	char title[20];
	char bopname[20];

	bopMan* bm = new bopMan[quantity];

	for (int i = 0; i < quantity; i++)
	{
		cout << "character " << i + 1;
		cout << "\n------------\n";
		cin.get();

		cout << "Enter fullname: ";
		cin.getline(fullname, 20);
		strcpy_s(bm[i].fullname, 20, fullname);

		cout << "title: ";
		cin.getline(title, 20);
		strcpy_s(bm[i].title, 20, title);

		cout << "Enter bopname: ";
		cin.getline(bopname, 20);
		strcpy_s(bm[i].bopname, 20, bopname);

		cout << "Enter preference(1,2,3,or 4): ";
		while (!(cin >> bm[i].preference))
		{
			cout << "Please enter integer: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		cout << "===============================\n";
	}
	return bm;
}

void deltable(bopMan* bm)
{
	delete[] bm;
	cout << "successfully deleted!\n";
}


void mTable(bopMan* bm, int quantity)
{
	char choice;

	cout << "++++++++++++++++++++++++++++++++++++++++++++\n"
		<< "Benevolent Order of Programmer Report\n"
		<< "a.display by  name\tb.display by title\n"
		<< "c.display by bopname\td.display by preference\n"
		<< "q.quit\n"
		<< "+++++++++++++++++++++++++++++++++++++++++++++\n";

	cout << "Enter your choice: ";
	while (cin >> choice && choice != 'q')
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		switch (choice)
		{
		case 'a': disName(bm, quantity);
			break;
		case 'b':disTitle(bm, quantity);
			break;
		case 'c':disBopname(bm, quantity);
			break;
		case 'd':disPreference(bm, quantity);
			break;
		default:
		{
			cout << "Incorrect input,please retry!\n";
			break;
		}
		}
		cout << "Next choice: ";

	}
	cout << "Bye!\n";
}


void disName(bopMan* bm, int quantity)
{
	for (int i = 0; i < quantity; i++)
	{
		cout << bm[i].fullname << endl;
	}
}

void disTitle(bopMan* bm, int quantity)
{
	for (int i = 0; i < quantity; i++)
	{
		cout << bm[i].title << endl;
	}
}

void disBopname(bopMan* bm, int quantity)
{
	for (int i = 0; i < quantity; i++)
	{
		cout << bm[i].bopname << endl;
	}
}

void disPreference(bopMan* bm, int quantity)
{
	int pre;
	cout << "Select preference 1, 2, 3, or 4: ";
	while (!(cin >> pre))
	{
		cout << "Please enter integer: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	for (int i = 0; i < quantity; i++)
	{
		if (bm[i].preference == pre)
			cout << bm[i].title << endl;
	}
}
