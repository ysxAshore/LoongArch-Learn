
typedef void * va_list;
#if __GNUC__<3 || (__GNUC__==3 && __GNUC_MINOR__<3)
#define va_start(ap,fmt) ap=((void *)&fmt)+1;
#else
#define va_start __builtin_va_start
#endif
#define va_arg __builtin_va_arg
#define va_end __builtin_va_end
#define __P(x) x

typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned int uint32_t;
typedef unsigned int size_t;