/*
This file is a wrapper for stdint.h

Visual Studio doesn't have stdint.h

stdint.h is part of the C99 standard. It's ancient and simply should be there. FAIL
*/

#ifdef LINUX_BUILD
#include <stdint.h>
#else
#include <stdint_win.h>
#endif