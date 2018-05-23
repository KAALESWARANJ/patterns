#include <stdio.h>

int main(void)
{  
	int k;
	for(int i=1;i<=5;i++)
	{
		for(int space=1;space<i;space++)
		{
		   printf(" ");	
		}
		k=10;
		while(k!=2*i-1)
		{ 
		     printf("*");
		     k--;
             	}
             	printf("\n");
	}	
	return 0;
}
