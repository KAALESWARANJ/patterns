#include<stdio.h>
int main(void)
{
	int i,space,k=0;
	for(i=1;i<=5;i++)
	{
	   for(space=1;space<=5-i;space++)
	   {
	   	printf(" ");
	   }
	   k=0;
	   while(k!=2*i-1)
	   {
	   	printf("*");
	   	k++;
	   }
	   printf("\n");
	}
	return 0;
}
               
