#include "donation.h"
#include <iostream>
#include <array>

using namespace std;

void donation()
{
	array<double, 10> arr = { 0 };
	double integer, avg = 0;
	int qty = 0;
	while (qty<10 && cin >> integer)
	{
		arr[qty++] = integer;
	}

	for (int j = 0; j < qty; j++)
	{
		avg += arr[j];
	}
	avg /= qty;

	qty = 0;
	for (double d : arr)
	{
		d > avg ? (++qty) : 1;
	}

	cout << "avg: " << avg;
	cout << "\nqty of greater than avg: " << qty;


}