#include "main.h"

void print_fibonacci_98(void) {
    unsigned int a1 = 1, a2 = 2, next;

    _putchar('1');
    for (int i = 1; i < 98; i++) {
        if (i != 1) {
            _putchar(',');
            _putchar(' ');
        }

        _putchar(a1 + '0');
        next = a1 + a2;
        a1 = a2;
        a2 = next;

        if (next >= 10) {
            while (next >= 10) {
                _putchar((next / 10) + '0');
                next %= 10;
            }
        }
    }
    _putchar('\n');
}

