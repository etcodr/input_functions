//
// Created by etcodr on 7/31/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "input.h"  // must include this header file

// example usage of the input functions
// must have the input.c and input.h files in the project directory
int main(void) {
    char *str = get_string("String: ");
    printf("Output: %s\n", str);
    putchar('\n');

    int i = get_int("Integer: ");
    printf("Output: %d\n", i);
    putchar('\n');

    long l = get_long("Long: ");
    printf("Output: %ld\n", l);
    putchar('\n');

    float f = get_float("Float: ");
    printf("Output: %f\n", f);
    putchar('\n');

    double d = get_double("Double: ");
    printf("Output: %lf\n", d);
    putchar('\n');

    char c = get_char("Char: ");
    printf("Output: %c\n", c);
    putchar('\n');

    free(str);
    return 0;
}
