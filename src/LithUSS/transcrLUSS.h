#include <windows.h>

#ifndef __TRANSCRLUSS_H__
#define __TRANSCRLUSS_H__

typedef int  (*PROCICCISSIII) (char*, char*, int, unsigned short*, unsigned short*, int*, int*, int);
typedef int  (*PROCAIC) (char*);

extern PROCICCISSIII	KircTranskr;
extern PROCAIC			initTranscrLUSS;

BOOL loadTranscrLUSS(char*);
void unloadTranscrLUSS();

#endif
