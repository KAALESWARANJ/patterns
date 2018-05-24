#include <stdio.h>

int main(void)
{
    int n,i,j,s;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
         printf("*");
    }
    printf("\n");
    for(i=1;i<=n-2;i++)
    {
    for(s=1;s<n-i;s++)
    {
        printf(" ");
        
    }
    printf("*");
    for(j=n-i;j>1;j--)
    {
        printf(" ");
    }
    printf("\n");
 }
 for(i=1;i<=n;i++)
 {
     printf("*");
 }
 return 0;
 }
