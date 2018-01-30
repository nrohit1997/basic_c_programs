#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum=0,r;
printf("enter an integer\n");
scanf("%d",&n);
while(n!=0)
{
	r=n%10;
	sum=sum+r;
	n=n/10;
}
printf("sum of digits of eneter = %d\n",sum);
}
