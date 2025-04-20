#include <stdio.h>
int main()
{
    int a = 3;
    int b = 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",b);
            b++;
        }
        printf("\n");
    }
    return 0;
}