#include "cctype.h"
#include <iostream>
#include <cctype>

using namespace std;

void ccpro()
{
	char ch;
	while (cin.get(ch) && ch != '@')
	{
		if (!isdigit(ch))
		{
			if (isalnum(ch))
				cout << (char)(isupper(ch) ? tolower(ch) : toupper(ch));
			else
				cout << ch;
		}

	}

}