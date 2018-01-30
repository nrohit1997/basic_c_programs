 /* number pattern  pattern printing */
#include<stdio.h>
void main()
{
	int i,j;
	/* to print 
	1
	22
	333
	4444 */
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	
	/* nto print
	5
	44
	333
	2222
	11111  */
	
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}



/* to print 
    1
	12
	123 */

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	
	/* to print 
	5
	54
	543
	5432
	54321 */
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	
		/* to print 
	1
	22
	333
	4444 */
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	
	/* to print 
	1
	21
	321
	4321*/
	
		for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
