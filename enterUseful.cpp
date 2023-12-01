#include "enterUseful.h"
#include <iostream>

using namespace std;


void enterUseful()
{
	char ch;
	cout << "Please enter one of the following choices:\n"
		<< "c)carnivore\tp)pianist\n"
		<< "t)tree\tg)game\n";

	swh:cin.get(ch);
	switch (ch)
	{
	case 'c':cout << "ccccccccccccccccccc\n";
		break;
	case 'p':cout << "PPPPPPPPPPPPPPPPPPPP\n";
		break;
	case 't':cout << "A maple is tree.\n";
		break;
	case 'g':cout << "Game Start\n";
		break;
	default:
	{
		cout << "Please enter c,p,t,or g : ";
		goto swh;
	}
	}

	cout << "\nDone!";

}
