#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    int i, x;
    char *str;

    va_start(args, format);

    while (*format)
    {

        if (*format == '%')
        {
            format++;
            switch (*format)
            {
            case 'c':
                _putchar(va_arg(args, int));
                format++;
                continue;
            case 's':
                str = va_arg(args, char *);
                if (!str)
                    str = "(nil)";
                for (; *str; str++)
                    _putchar(*str);
                format++;
                continue;
            default:
                continue;
                ;
            }
        }
        _putchar(*format++);
    }
}
