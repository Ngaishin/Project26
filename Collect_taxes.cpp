#include "Collect_taxes.h"
#include <iostream>
#include <cmath>

using namespace std;

void payTaxes()
{
	float salary;
	float taxes;
	while (cin >> salary && salary >= 0)
	{
		if (salary > 35000)
			taxes = (salary - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1;
		else if (salary > 15000)
			taxes = (salary - 15000) * 0.15 + 10000 * 0.1;
		else if (salary > 5000)
			taxes = (salary - 5000) * 0.1;
		else
			taxes = 0;
		cout << "The income tax is " << taxes << endl;
	}
}