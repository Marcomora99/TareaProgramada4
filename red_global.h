#ifndef RED_GLOBAL_H
#define RED_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RED_LIBRARY)
#  define REDSHARED_EXPORT Q_DECL_EXPORT
#else
#  define REDSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // RED_GLOBAL_H
