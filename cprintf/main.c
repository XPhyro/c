#include <stdio.h>

int main(int argc, char *argv[])
{
    if (--argc != 2) {
        fprintf(stderr, "Exactly 2 arguments are needed, exiting.\n");
        return 1;
    }

    printf(argv[1], argv[2]);

    return 0;
}
