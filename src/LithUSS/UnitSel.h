#include <windows.h>

#ifndef __UNITSEL_H__
#define __UNITSEL_H__

typedef int(*PROCBIC)(char *);
typedef int(*PROCBISSSIII)(unsigned short[], unsigned short[], unsigned short[], int, unsigned int[], unsigned int*);

extern PROCBIC initUnitSel;
extern PROCBISSSIII selectUnits;

BOOL loadUnitSel(char*);
void unloadUnitSel();

#endif