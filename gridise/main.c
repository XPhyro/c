#include <stdio.h>

void printsquare();
void printrectangle();

int main(int argc, char *argv[])
{
    printf("BEGIN SQUARE\n");
    printsquare();
    printf("END SQUARE\n\n");

    printf("BEGIN RECTANGLE\n");
    printrectangle();
    printf("END RECTANGLE\n");

    return 0;
}

void printsquare()
{
    const int w = 1920, h = 1080, gw = w / 2, gh = h / 2;
    int n = 0;
    float rw, rh;

    for (int i = 1; i <= gw; ++i) {
        for (int j = 1; j <= gh; ++j) {
            if ((rw = (float)w / i) == (rh = (float)h / j)) {
                printf("%2d: %3d, %3d; %.6f, %.6f\n", ++n, i, j, rw, rh);
            }
        }
    }
}

void printrectangle()
{
    const int w = 1920, h = 1080, gw = w / 2, gh = h / 2;
    int nw = 0, nh = 0, n = 0, rw, rh;

    int lw[gw], lh[gh];

    for (int i = 1; i <= gw; ++i) {
        if (w % i == 0) {
            lw[nw++] = i;
        }
    }

    for (int i = 1; i <= gh; ++i) {
        if (h % i == 0) {
            lh[nh++] = i;
        }
    }

    for (int i = 0; i < nw; ++i) {
        for (int j = 0; j < nh; ++j) {
            rw = w / lw[i];
            rh = h / lh[j];
            printf("%2d: %3d, %3d; %4d, %4d\n", ++n, i, j, rw, rh);
        }
    }
}
