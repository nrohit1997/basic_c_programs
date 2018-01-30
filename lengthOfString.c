/* String headerfile demo */
#include<stdio.h>
int strlength(char[]);
void main()
{
	char name[20];
	printf(" enter a name\n");
	gets(name);
	
	int a=strlength(name);
	printf("length of %s = %d",name,a);
}
int strlength(char x[])
{
	int i=0/*count=0*/;
	while(x[i]!='\0')
	{
		//count++;
		i++;
	}
	return i;
}
