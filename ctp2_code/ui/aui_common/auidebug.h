#ifndef __AUIDEBUG_H__
#define __AUIDEBUG_H__

#ifdef _DEBUG

#ifndef Assert

#if defined(WIN32)
#include <crtdbg.h>
#define Assert(x) _ASSERTE(x)
#endif

#endif

#endif

#ifndef Assert
#define Assert(x) (void)0
#define _ASSERTE(x) (void)0
#endif

#endif
