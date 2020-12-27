#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int i, j, len, random;
    char tmp;
    time_t t;

    if (argc == 1)
        return 1;

    srand((unsigned)time(&t));

    for (i = 1; i < argc; i++) {
        len = strlen(argv[i]);

        for (j = len - 1; j > 0; j--) {
            random = rand() % (i + 1);
            tmp = argv[i][random];
            argv[i][random] = argv[i][j];
            argv[i][j] = tmp;
        }

        printf(i == argc - 1 ? "%s\n" : "%s ", argv[i]);
    }

    return 0;
}
