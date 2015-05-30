#ifndef _PY_H
#define _PY_H

#include "pluginmain.h"

//menu identifiers
#define MENU_OPEN 0
#define MENU_ABOUT 1

//functions
void pyInit(PLUG_INITSTRUCT* initStruct);
void pyStop();
void pySetup();

#endif // _X64DBGPYTHON_H
