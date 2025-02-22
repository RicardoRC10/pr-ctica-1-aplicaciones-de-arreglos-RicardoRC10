#include <stdio.h>

int main()
{
    int i, j, a[2][3] = {{2, 4, 34}, {2, 4, 34}};
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++){
            printf("%i %p\n", a[i][j], &a[i][j]);
        }
    }
    return 0;
}
