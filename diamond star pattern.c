#include<stdio.h>
int main(void)
{
	int i,j,space,k=0;
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
            	for(i=1;i<=4;i++)
                    {
		for(space=1;space<=i;space++)
		{
			printf(" ");
		}    
		            k=8;
			while(k!=2*i-1)
			{
				printf("*");
				k--;
			}
		printf("\n");
	          }
	
	return 0;
}
