#include <stdio.h>

int main ()
{
    char b= 'B',y = 'y',e = 'e';
    printf ("%c%c%c\n", b,y,e);

    int x = 123;
    float z = 123.456;
    printf("x: %-3d\n",x);
    printf("y: %-6.3d\n",y);

    int a= 50, t = 150, c= 1500;

    printf("15 : 0x%04X\n",a);
    printf("150 : 0x%04X\n",b);
    printf("1500 : 0x%04X\n",c);

    printf("please enter a character: \n");
    int ch = getchar();
    printf("you entered %c\n ",ch);
    putchar(ch);

    return 0;
}