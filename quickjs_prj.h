#ifndef QUICKJS_PRJ_H
#define QUICKJS_PRJ_H

/*-----------------------------------------------------------------------------
                               GENERAL INCLUDES
-----------------------------------------------------------------------------*/
#ifdef __cplusplus
    #include <cstdio>
#else
    #include <stdio.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*-----------------------------------------------------------------------------
                               LITERAL CONSTANTS
-----------------------------------------------------------------------------*/
#define EMSCRIPTEN
/*-----------------------------------------------------------------------------
                                     TYPES
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
                               MEMORY CONSTANTS
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
                                   VARIABLES
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
                                    MACROS
-----------------------------------------------------------------------------*/
#define printf(...) osa_printf(__VA_ARGS__)
#ifdef putchar
	#undef putchar
#endif
#define putchar     osa_putchar
#define puts        osa_puts
#define scanf       osa_scanf

#define fclose(fp)  ((void)0)
#define feof(fp)    ((void)0)
#define ferror(fp)  ((void)0)
#define fflush(fp)  ((void)0)
#define fgetc(fp)   ((void)0)
#define ftell(fp)   ((void)0)
#define ftello(fp)  ((void)0)

#define fopen(filename, mode)           ((void)0)
#define fgets(line, line_len, fh)       ((void)0)
#define fread(a_ptr, el_size, n, fp)    ((void)0)
#define fwrite(a_ptr, el_size, n, fp)   ((void)0)
#define fseek(fp, offset, place)        ((void)0)
#define ftrunc(file, size)              ((void)0)

#define assert(e)   ((void)0)
#define exit(num)   ((void)0)

#define fprintf(file, format, ...)      ((void)0)

/*-----------------------------------------------------------------------------
                                  PROCEDURES
-----------------------------------------------------------------------------*/
/**
 * https://en.cppreference.com/w/c/io/fprintf
 */
static inline int osa_printf
    (
    char const* fmt,
    ...
    )
{
(void)fmt;
return -1;
}

/**
 * https://en.cppreference.com/w/c/io/puts
 */
static inline int osa_puts
    (
    char const*str
    )
{
(void)str;
return EOF;
}

/**
 * https://en.cppreference.com/w/c/io/putchar
 */
static inline int osa_putchar
    (
    char c
    )
{
(void)c;
return EOF;
}

/**
 * https://en.cppreference.com/w/c/io/fscanf
 */
static inline int osa_scanf
    (
    char const* fmt,
    ...
    )
{
(void)fmt;
return EOF;
}

#ifdef __cplusplus
}
#endif

#endif /* QUICKJS_PRJ_H */


