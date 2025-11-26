#include <stdio.h>

int power(int m, int n);

/* test power function */
int main()
{
    int i;

    for (i = 0; i < 100; ++i)
        printf("%d %d %d\n", i, power(i), power(i));
    return 0;
}

/* power:  raise base to n-th power; n >= 0 */
int power(int far)
{
    

    int i, c;
    for(i=0; i< far; ++i)
        c = 5 * (far - 32) / 9;
    return c;
}