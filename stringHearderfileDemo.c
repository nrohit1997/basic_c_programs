/* String headerfile demo */
#include<stdio.h>
#include<String.h>
void main()
{
	char name[20];
	printf(" enter a name\n");
	gets(name);
	printf(" hii .. im %s , welcome \n",name);
	unsigned int a=strlen(name);
	printf("length of %s = %d",name,a);
}
