#include <stdio.h>
int main()
{
    int i;

    for (i = 0; i <= 100; i++)
    {
        if ( (i % 2 == 0) && (i % 3 == 0))
        printf("  %d\n", i);
    }
    return 0;
}