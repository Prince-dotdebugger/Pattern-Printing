#include<stdio.h>
int main()
{
int i, j, k;
for(i=1;i<6;i++)
{
for(j=i;j>=1;j--)
{
printf(" ");
}
for(k=5;k>=i;k--)
{
printf("%d", k);
}
printf("\n");
}
return 0;
}
