#include <stdio.h>

int multiply (int x, int y)
{
    int mult;
    mult = x * y;

    return (mult);
}
int main(void)
{
    int answ;
    answ = multiply (3, 5);

    printf("multiplication result %d\n",answ);
    return 0;
}