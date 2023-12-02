#ifndef MEMBERTABLE_H
#define MEMBERTABLE_H

struct bopMan
{
	char fullname[20];
	char title[20];
	char bopname[20];
	int preference;
};

void bopReport();
bopMan* creaTable(int);
void mTable(bopMan*, int);
void disName(bopMan*, int);
void disTitle(bopMan*, int);
void disBopname(bopMan*, int);
void disPreference(bopMan*, int);
void deltable(bopMan* bm);

#endif