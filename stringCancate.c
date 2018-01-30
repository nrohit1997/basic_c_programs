/* adding two string i.e string cancatination */
#include<stdio.h>
#include<string.h>
void main()
{
	int l1,l2;
	//char s1[100],s2[100];
char	s1[100]="hello";
char	s2[100]="world";
l1=strlen(s1);
l2=strlen(s2);
int i=0;
while(i<=l2)
{
	s1[l1+i]=s2[i];
	i++;
}
	printf("%s",s1);
}
