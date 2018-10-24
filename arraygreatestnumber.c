#include<stdio.h>

void main()
{
	int a[5],i,j,temp,n;
	{
		printf("enter no of elements: \n",n);
		scanf("%d",&n);
}

	for(i=0;i<n;i++)
	{
		printf("enter the value of a[%d]",i);
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++) //to sort the elements
	{
		if (a[i]<a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		
		}
	}
	}	
	printf("array numbers from greatest to lowest..........\n");
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	
}
