#include<stdio.h>
int main(void)
{
	int i,space,k=0,count=0,count1=0;
	for(i=1;i<=5;i++)
	{
	   for(space=1;space<=5-i;space++)
	   {
	   	printf(" ");
	   	count++;
	   }
	  while(k!=2*i-1)
	  {
	  	if(count<=4)
	  	{
	  		printf("%d",i+k);
	  		count++;
	  	}
	  	else
	  	{
	  		count1++;
	  		printf("%d",i+k-2*count1);
	  	}
	  	k++;
	  }
	  count=count1=k=0;
	  printf("\n");
	}
	return 0;
         }
	  		
	  	
               
