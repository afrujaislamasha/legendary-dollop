#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int i = 1, n = 2;
    printf ("The prime numbers from 1 to 300 are:\n");
    while (i <= 300)
    {
        while (n < i)
        {
            if (i % n == 0)
                break;
            else
                printf ("%d\t", i);
            n++;
        }
        i++;
    }
    return 0;
}
