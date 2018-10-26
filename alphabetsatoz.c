#include <stdio.h>
main()
{
	int i, asc=96;
	char alpha[27];
	

	for(i=0;i<27;i++)
	{
		alpha[i]=asc;
		asc++;
		
	}
alpha[i]='\0';
printf("the alphabets are:%s\n",alpha);
	
}
