#ifndef HOLBERTONH
#define HOLBERTONH

#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);
int print_dec(va_list d);

typedef struct code_format
{
        char *sc;
        int (*f)(va_list);
}code_f;
#endif /* HOLBERTONH */
