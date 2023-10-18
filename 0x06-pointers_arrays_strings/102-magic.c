#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int a[5] = {98, 102, 402, 1024, 4096};
    int *p;

    p = a;

    /* Your code goes here */
    p[2] = *(p + 5) - 98;

    printf("a[2] = %d\n", a[2]);

    return (0);
}
