#include <stdlib.h>
#include <math.h>

struct s_bit {
    int *arr;
    int n;
};

void    correctSong(struct s_bit *bit, int l, int row, int col, int dist);