#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
    n = get_int("Height:");
    }
    while(n<=0 || n>8);
    for (int i = 1; i<=n; i++)
    {
        for (int j = n; j>i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k<=i; k++)
        {
            printf("#");

        }
        printf("\n");
    }
return 0;
}