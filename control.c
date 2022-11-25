
#include <stdio.h>

int main()
{
    int x = 1;
    int i;
    for (i = 2; i < 10; i++)
    {
        if (i%3 == 0)
        continue;
        x += 1;
        printf("%d",x);
    }
}