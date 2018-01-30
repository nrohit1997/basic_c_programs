/** factorial of a number **/
#include<stdio.h>
#include<conio.h>
int fac(int n)
{
	int val=1,i;
	for(i=n;i>=1;i--)
	val=val*i;
	return(val);
}
void main()
{
int a,f;
printf("enter a value \n");
scanf("%d",&a);
f=fac(a);
printf("the factorial value = %d",f);	
}
