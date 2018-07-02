#include <windows.h>

#ifndef __RATECHANGE_H__
#define __RATECHANGE_H__

typedef int (*PROCICICILS)(char *, int, char[][4], int *, long *, short **);
typedef int (*PROCICCILS)(char *, char[][4], int *, long *, short **);
typedef int (*PROCIIIISI)(int, int, unsigned int, short *, unsigned int);

extern PROCICICILS change_DB_rate;
extern PROCICCILS initRateChange;
extern PROCIIIISI change_phoneme_rate;

BOOL loadRateChange(char*);
void unloadRateChange();

#endif