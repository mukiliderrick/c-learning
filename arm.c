#include <stdio.h>

int main()
{
    int x =1, y = 3;

    printf("x: %d\n, y: %d\n",x,y);

    x =1, y = 3;
    x += y;

    x =1, y = 3;
    x += -y;

    x =1, y = 3;
    x -= y;

    x =1, y = 3;
    x -= -y;

    x =1, y = 3;
    y *= y;

    x =1, y = 3;
    x *= -y;
    printf("x: %d\n", x);
    printf("x: %d\n", x );
    printf("x: %d\n", x);
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("x: %d\n", x);
    
}