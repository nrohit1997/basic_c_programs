/**Area of circle **/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
main()
{
	int r;
	float area=0;
printf("enter the value of r\n");
scanf("%d",&r);
area=PI*r*r; // area of circle is pi r square
printf("the value is %f",area);
getch();
return 0;
}

