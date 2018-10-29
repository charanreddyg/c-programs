#include<stdio.h>
//#define size 10
void main()
{
	int i,even=0,odd=0,n;

	
		printf("enter the value of n \n");
		scanf("%d",&n);
	
	
	
	for(i=1;i<n;i++)
	
{
	
	if (i/2==0 && i==i+2 )
	
		even=even+i;
	
	
	else
	
		odd=odd+i;
		
	}
printf("sum of odd num=%d \n",odd);
printf("sum of evven num=%d \n",even);
}


