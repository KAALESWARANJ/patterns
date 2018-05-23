#include<stdio.h>
int main(void)
{
	int r,coe=1,i,j,s;
	scanf("%d\n",&r);
	for(i=0;i<r;i++)
	{
		for(s=1;s<=r-i;s++)
		{
			printf("  ");
		}
		for(j=0;j<=i;j++)
		{
			if(i==0 || j==0)
			
				coe=1;
				
			
			else
			
			   coe=coe*(i-j+1)/j;
			
			printf("%4d",coe);}
		
		printf("\n");
	}
	return 0;
}
