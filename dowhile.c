#include <stdio.h>
int main ()
{
    int i, j;

    i = 1;
    while (i<=3)
    {
        printf("the start of the outer iteration %d\n",i);
        j = 1;
        do
        {
            printf("the start of the second iteration %d\n",j);
            j++;
        } while (j <= 4);
        i++;
    }
    return 0;
}