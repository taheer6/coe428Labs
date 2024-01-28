#include <stdlib.h>
#include "towers.h"

int main(int argc, char **argv)
{
    int n = 3;
    int from = 1;
    int dest = 2;


    if (argc == 4) {
        n = atoi(argv[1]);
        from = atoi(argv[2]);
        dest = atoi(argv[3]);
    }

    else if (argc == 2) {
        n = atoi(argv[1]);
    }

    towers(n, from, dest);

    exit(0);
}

