/** sum of n natural numbers using while loop **/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,c,sum=0;
	printf("enter the n value\n");
	scanf("%d",&n);
	c=1;
	while(c<=n)
	{
		sum=sum+c;
		++c;
	}
	printf("the sum value = %d",sum);
}
