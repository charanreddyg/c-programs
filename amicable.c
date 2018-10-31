#include <stdio.h>
 
int main()
{
    int n1,n2, i,j, sum = 0;
 
    printf("Enter a Number one\n");
    scanf("%d", &n1);
  printf("Enter a Number two\n");
    scanf("%d", &n2);

    for (i = 1; i < n1; i++)
    {
    
	if (n1%i == 0)
        {
            sum = sum + i;
        }
    }
    
    if (sum == n2)
        printf("Entered Number is amicable number");
    else
        printf("Entered Number is not a amicable number");
}
