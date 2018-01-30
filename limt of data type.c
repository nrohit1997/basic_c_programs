/** there is limt for the integer value in c lang
 the limit value of the int DATA TYPE is -32768 to 32767
  if u add again + 1 to 32767 
  the value of the out put will be -32768 **/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	long int a;
	float f;
	i=429496729+1;
	a=32767+1;
	f=32767+1;
	printf("%d %i %f",i,a,f);
	
}
