#include "stdafx.h"
#include "UnitSel.h"

HMODULE dll_handle;
PROCBIC initUnitSel;
PROCBISSSIII selectUnits;


BOOL loadUnitSel(char *biblioteka)
{
	if (!(dll_handle=LoadLibrary(biblioteka))) //"UnitSelection.dll"
		return FALSE;
	initUnitSel = (PROCBIC)GetProcAddress(dll_handle, "initUnitSel");
	selectUnits = (PROCBISSSIII)GetProcAddress(dll_handle, "selectUnits");

	if ((!initUnitSel)	|| (!selectUnits))
	{
    	FreeLibrary (dll_handle); 
		dll_handle=NULL;
		return FALSE;
	}
	return TRUE;
}

void unloadUnitSel()
{
	if (dll_handle)
	{
		FreeLibrary (dll_handle);
		dll_handle=NULL;
	}
}