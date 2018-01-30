/* UPPER CASE TO lower case */
#include<stdio.h>
#include<string.h>
void main()
{
	char a[20];
	printf("enter a sting\n");
	gets(a);
	/*strlwr(a);
	printf("lower case : %s",a);
*/
int i=0;
while(a[i]!='\0')
{
	if(a[i]>='A' && a[i]<='Z')
	{
		a[i]=a[i]+32;
	}
	i++;
	}
	printf("lower case : %s",a);
}
