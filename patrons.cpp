#include "patrons.h"
#include <iostream>
#include <vector>


using namespace std;


void patron()
{
	int q;
	cout << "Enter quantity of donors: ";
	while (!(cin >> q))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Please enter integer: ";
	}
	vector<donor>vdor;
	//vdor.reserve(q);

	cout << "============\n"
		<< "Enter donors:\n"
		<< "============\n";
	for (int i = 0; i < q; i++)
	{
		donor d;
		cout << "Character " << i + 1
			<< "\nName: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(cin, d.name);

		cout << "Donation money: ";
		while (!(cin >> d.amount))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Please enter integer: ";
		}

		vdor.push_back(d);
		cout << "--------------------------\n";
	}
	system("cls");

	int cnt = 0;
	cout << "==========================\n"
		"||++++Grand Patrons+++++||\n"
		"==========================\n";
	cout << "||name\t\t||money\n"
		<< "--------------------------\n";
	for (int i = 0; i < q; i++)
	{
		if (vdor[i].amount > 10000)
		{
			cout << "||" << vdor[i].name << "\t\t||" << vdor[i].amount << "\n";
			cnt++;
		}
	}
	if (0 == cnt)
		cout << "||none" << "\t\t||" << "none\n";
	cout << "==========================\n";
	cnt = 0;
	cout << "==========================\n"
		<< "||+++++++Patrons++++++++||\n"
		<< "==========================\n";
	for (int i = 0; i < q; i++)
	{
		if (vdor[i].amount <= 10000)
		{
			cout << "||" << vdor[i].name << "\t\t||" << vdor[i].amount << "\n";
			cnt++;
		}
	}

	if (0 == cnt)
		cout << "||none" << "\t\t||" << "none\n";
	cout << "==========================\n";

}