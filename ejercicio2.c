#include <stdio.h>

int main()
{
    int a[3] = {2, 4, 34};

    printf("%p / %p / %p\n", &a, a, &a[0]);

    return 0;
}
