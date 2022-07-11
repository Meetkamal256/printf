#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#define STR_TO_INT(val) (val - 48)
#define INT_TO_STR(val) (val + 48)

int _printf(const char *format, ...);
int _putchar(char c);

#endif
