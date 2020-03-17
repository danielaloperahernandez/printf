#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"
/**
* print_bin - convert to binary
* @b: number in decinal
* Return: number of chars printed
*/
int print_bin(va_list b)
{
        char bin[200];
        int num;
        int i = 0, j = 0;
        
        num = va_arg(b,int);
        if (num == 0)
        {
                putchar('0');
                return (1);
        }
        while (num > 0)
        {
                bin[i] = num % 2 + '0';
                num /= 2;
                i++;
        }
        i -= 1;
        while (i >= 0)
        {
                putchar(bin[i]);
                i--, j++;
        }
        return (j);
}