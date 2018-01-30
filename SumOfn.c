/** sum of n natural numbers **/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,sum=0;
	printf("enter the n value");
	scanf("%d",&n);
	for(a=0;a<=n;a++)
	{
		sum=sum+a;
	}
	printf("the sum = %d",sum);
}
