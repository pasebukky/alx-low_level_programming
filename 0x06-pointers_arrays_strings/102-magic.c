#include <stdio.h>

int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 98; /* Updated the value of a here */
    p = &n;


    printf("a[2] = %d\n", a[2]);
    return (0);
}

