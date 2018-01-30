/** while loop demo **/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum=0;
	printf("enter the int value for a\n\n");
	scanf("%d %d",&a,&b);
	while(a<=b)
	{
		sum=a++;
		
	}
	printf("sum = %d",sum);
}
