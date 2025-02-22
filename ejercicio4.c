#include <stdio.h>

int main()
{
    int a[2][3] = {{2, 4, 34}, {2, 4, 34}};
    printf("%p / %p / %p\n", a, a[0], &a[0][0]);
    return 0;
}
