#include <stdio.h>
#include <stdarg.h>

void simple_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    for (const char *p = format; *p != '\0'; p++) {
        if (*p == '%') {
            p++;
            switch (*p) {
                case 'd': {
                    int i = va_arg(args, int);
                    printf("%d", i);
                    break;
                }
                case 's': {
                    char *s = va_arg(args, char *);
                    printf("%s", s);
                    break;
                }
                case 'c': {
                    int c = va_arg(args, int);  // char is promoted to int in variadic functions
                    putchar(c);
                    break;
                }
                case '%': {
                    putchar('%');
                    break;
                }
                default: {
                    putchar(*p);
                    break;
                }
            }
        } else {
            putchar(*p);
        }
    }

    va_end(args);
}

int main() {
    simple_printf("Hello, %s! Your score is %d. Percentage sign: %%\n", "Alice", 95);
    return 0;
}

