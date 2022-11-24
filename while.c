#include <stdio.h>
int main ()
{
    int c;

    c = ' ';
    printf("Enter a chaarcater:\n(enter k to exit)\n");
    while (c != 'k')
    {
        c = getchar();
        putchar(c);
    }
    printf("\nOut of the loop while loop. Bye!\n");
    return 0;
}