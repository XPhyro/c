#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void printfacts(unsigned long int);

int main(int argc, char *argv[])
{
    char *end;
    unsigned long int val;
    int i, lenold, len;
    const int initlen = 4;
    char *arg = malloc(initlen * sizeof(char));

    for (i = 1, lenold = initlen; i < argc; i++) {
        len = strlen(argv[i]);
        if (lenold < len) {
            free(arg);
            arg = malloc(len * sizeof(char));
        }
        strcpy(arg, argv[i]);
        val = strtoul(argv[i], &end, 10);
        if (end == argv[i] || *end || errno == ERANGE) {
            fprintf(stderr, "Invalid argument %s.\n", arg);
            continue;
        }
        printfacts(val);
    }

    return 0;
}

void printfacts(unsigned long int value)
{
    unsigned long int i, val;
    int n;

    for (i = 2, val = value; i <= val; i++) {
        n = 0;
        while (!(val % i)) {
            val /= i;
            n++;
        }
        if (n)
            printf("%lu: %lu\t%d\n", value, i, count);
    }
}
