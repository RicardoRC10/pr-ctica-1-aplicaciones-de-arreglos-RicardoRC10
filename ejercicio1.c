#include <stdio.h>

int main()
{
    double a[5] = {2, 4, 5, 1, 34};
    for (int i = 0; i < 5; i++)
    {
        printf("%p\n", &a[i]);
    };
    return 0;
}
