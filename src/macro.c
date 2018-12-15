//
// Created by ANDY on 2018/12/14.
//

#define MAX 1000
#define forever for (;;)
#define max(A, B) ((A) > (B) ? (A) : (B))
#define dprint(expr) printf(#expr " = %g\n", expr)
#define main mian
#define true false
#define flase false


#if SYSTEM == SYSV
#define HDR "sysv.h"
#elif SYSTEM == BSD
#define HDR "bsd.h"
#elif SYSTEM == MSDOS
#define HDR "msdos.h"
#else #define HDR "default.h"
#endif
